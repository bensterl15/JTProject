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

    void modeOneSelected();
    void modeTwoSelected();
    void modeThreeSelected();
    void modeFourSelected();
    void modeFiveSelected();
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
};

#endif // MAINWINDOW_H
