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


    QSlider *p1 = this->findChild<QSlider*>("p1");
    QSlider *p2 = this->findChild<QSlider*>("p2");
    QSlider *p3 = this->findChild<QSlider*>("p3");
    QSlider *p4 = this->findChild<QSlider*>("p4");
    QSlider *p5 = this->findChild<QSlider*>("p5");

    int p11 = 0;

    try{
        int p11 = p1->value();
    }catch(std::exception e){
        //QMessageBox::information(this,tr("ugh"),QString::fromStdString(std::to_string(p11)));
    }

    QMessageBox::information(this,tr("ugh"),QString::fromStdString(std::to_string(p11)));

    //QString s1="",s2="",s3="",s4="",s5="";
    /*int i = 0;
    for(i = 0;  i < p1; i++) s1 += QString::fromStdString(std::to_string(((float)d1->value()/100 + 0.1)*5)) + ",";
    for(i = p1; i < p2; i++) s2 += QString::fromStdString(std::to_string(((float)d2->value()/100 + 0.1)*5)) + ",";
    for(i = p2; i < p3; i++) s3 += QString::fromStdString(std::to_string(((float)d3->value()/100 + 0.1)*5)) + ",";
    for(i = p3; i < p4; i++) s4 += QString::fromStdString(std::to_string(((float)d4->value()/100 + 0.1)*5)) + ",";
    for(i = p4; i < p5; i++) s5 += QString::fromStdString(std::to_string(((float)d5->value()/100 + 0.1)*5)) + ",";
*/
    /*QString mstr = "cd ~/Work/JTModel/; python3 ann.py '" + str + "' " +
                    s1 +
                    s2 +
                    s3 +
                    s4 +
                    s5 +
            " 'out'";
    //QMessageBox::information(this,tr("ugh"),QString::fromStdString(std::string(d1->value())));
    executeTerminalCommand((char *) mstr.toLatin1().data());
    std::string otherStr = str.toLatin1().data();
    otherStr = std::regex_replace(otherStr,std::regex("\\.wav"),"_out");
    this->findChild<QLabel*>("outputLabel")->setText(QString::fromStdString(otherStr));
    */
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
