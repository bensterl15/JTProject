#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QMessageBox>
#include <QFileDialog>
#include <QSoundEffect>
#include <QSound>
#include <regex>
#include <QDial>
#include <QSlider>

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
};

#endif // MAINWINDOW_H
