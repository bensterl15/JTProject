#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QMessageBox>
#include <QFileDialog>
#include <QSoundEffect>
#include <QSound>
#include <QDial>
#include <QSlider>
#include <QPainter>
#include "restrictedslider.h"
#include <regex>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void playFunction();
    void playOutputFunction();
    void searchFunction();
    void generateFunction();
    void modeChange();
    void auxChange();

    void d1Changed();
    void d2Changed();
    void d3Changed();
    void d4Changed();
    void d5Changed();

private:
    Ui::MainWindow *ui;
    FILE *terminalPointer;
    void executeTerminalCommand(char *cmd){
        char data[512];
        fgets(data, sizeof(data) , popen(cmd,"r"));
        //QMessageBox::information(this,tr("Playing"),tr(data));
    }
    void applyMode(int arg1,int arg2,int arg3,int arg4){
        this->findChild<QSlider*>("p1")->setValue(arg1);
        this->findChild<QSlider*>("p2")->setValue(arg2);
        this->findChild<QSlider*>("p3")->setValue(arg3);
        this->findChild<QSlider*>("p4")->setValue(arg4);
    }
    void resetBounds()
    {
        RestrictedSlider *p1 = this->findChild<RestrictedSlider*>("p1");
        RestrictedSlider *p2 = this->findChild<RestrictedSlider*>("p2");
        RestrictedSlider *p3 = this->findChild<RestrictedSlider*>("p3");
        RestrictedSlider *p4 = this->findChild<RestrictedSlider*>("p4");

        p1->setMinValue(1);
        p1->setMaxValue(p2->value() - 1);

        p2->setMinValue(p1->value() + 1);
        p2->setMaxValue(p3->value() - 1);

        p3->setMinValue(p2->value() + 1);
        p3->setMaxValue(p4->value() - 1);

        p4->setMinValue(p3->value() + 1);
        p4->setMaxValue(64);
    }
    QPixmap rotatePixmap(char* pixPath,float degrees,bool littleKnob){
        QPixmap ship(pixPath);
        QSize s = ship.size();
        if(littleKnob){
            s.setWidth(s.width() + 1.2);
            s.setHeight(s.height() + 1.2);
        }
        QPixmap rotate(s);
        rotate.fill(Qt::transparent);

        QPainter p(&rotate);
        //p.setRenderHint(QPainter::Antialiasing);
        p.setRenderHint(QPainter::SmoothPixmapTransform);
        p.setRenderHint(QPainter::HighQualityAntialiasing);
        p.translate((rotate.size().width())/ 2, (rotate.size().height())/ 2);
        p.rotate(degrees);
        p.translate(-(rotate.size().width()) / 2, -(rotate.size().height())/ 2);

        p.drawPixmap(0,0,ship);
        p.end();
        return rotate;
    }

};

#endif // MAINWINDOW_H
