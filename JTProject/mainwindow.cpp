#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPushButton *playButton = this->findChild<QPushButton*>("playButton");
    QPushButton *searchButton = this->findChild<QPushButton*>("searchButton");
    QPushButton *generateButton = this->findChild<QPushButton*>("generateButton");
    QPushButton *playOutputButton = this->findChild<QPushButton*>("playOutputButton");

    QObject::connect(playButton,&QPushButton::clicked,this,&MainWindow::playFunction);
    QObject::connect(searchButton,&QPushButton::clicked,this,&MainWindow::searchFunction);
    QObject::connect(generateButton,&QPushButton::clicked,this,&MainWindow::generateFunction);
    QObject::connect(playOutputButton,&QPushButton::clicked,this,&MainWindow::playOutputFunction);
}

void MainWindow::playFunction(){
    std::string volCommand = "amixer set Master " + std::to_string(this->findChild<QSlider*>("volume")->value()) + "%";
    executeTerminalCommand((char *) volCommand.c_str());

    QString str = this->findChild<QLabel*>("audioLabel")->text();
    str = "aplay " + str;
    executeTerminalCommand((char *) str.toLatin1().data());
}

void MainWindow::playOutputFunction(){
    std::string volCommand = "amixer set Master " + std::to_string(this->findChild<QSlider*>("volume")->value()) + "%";
    executeTerminalCommand((char *) volCommand.c_str());

    QString str = this->findChild<QLabel*>("outputLabel")->text();
    str = "aplay " + str;
    executeTerminalCommand((char *) str.toLatin1().data());
}

void MainWindow::generateFunction(){
    QString str = this->findChild<QLabel*>("audioLabel")->text();

    QDial *d1 = this->findChild<QDial*>("d1");
    QDial *d2 = this->findChild<QDial*>("d2");
    QDial *d3 = this->findChild<QDial*>("d3");
    QDial *d4 = this->findChild<QDial*>("d4");
    QDial *d5 = this->findChild<QDial*>("d5");

    QString mstr = "cd ~/Work/JTModel/; python3 ann.py '" + str + "' " +
                    QString::fromStdString(std::to_string(((float)d1->value()/100 + 0.1)*5)) + "," +
                    QString::fromStdString(std::to_string(((float)d1->value()/100 + 0.1)*5)) + "," +
                    QString::fromStdString(std::to_string(((float)d1->value()/100 + 0.1)*5)) + "," +
                    QString::fromStdString(std::to_string(((float)d1->value()/100 + 0.1)*5)) + "," +
                    QString::fromStdString(std::to_string(((float)d1->value()/100 + 0.1)*5)) +
            " 'out'";
    //QMessageBox::information(this,tr("ugh"),QString::fromStdString(std::string(d1->value())));
    executeTerminalCommand((char *) mstr.toLatin1().data());
    std::string otherStr = str.toLatin1().data();
    otherStr = std::regex_replace(otherStr,std::regex("\\.wav"),"_out");
    this->findChild<QLabel*>("outputLabel")->setText(QString::fromStdString(otherStr));
}

void MainWindow::searchFunction(){
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"/path/to/file/",tr("Wav Files (*.wav)"));
    QLabel *audioLabel = this->findChild<QLabel*>("audioLabel");
    audioLabel->setText(fileName);
}

MainWindow::~MainWindow()
{
    delete ui;
}
