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
private:
    Ui::MainWindow *ui;
    void executeTerminalCommand(char *cmd){
        char data[512];
        fgets(data, sizeof(data) , popen(cmd,"r"));
        //QMessageBox::information(this,tr("Playing"),tr(data));
    }
};

#endif // MAINWINDOW_H
