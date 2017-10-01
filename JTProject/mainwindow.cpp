#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPushButton *playButton = this->findChild<QPushButton*>("pushButton");
    QObject::connect(playButton,&QPushButton::clicked,this,&MainWindow::accept);

    //QPushButton *optionButton = this->findChild<QPushButton*>("option1");
    //QObject::connect(optionButton,&QPushButton::clicked,this,&MainWindow::loadLabel);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::accept(){
    //QMessageBox::information(this,tr("Boogity"),tr("Hello!"));
    char data[512];
    fgets(data, sizeof(data) , popen("pwd","r"));
    QMessageBox::information(this,tr("Playing"),tr(data));
}
