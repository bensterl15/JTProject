#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPushButton *playButton = this->findChild<QPushButton*>("pushButton");
    QObject::connect(playButton,&QPushButton::clicked,this,&MainWindow::accept);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::accept(){
    QMessageBox::information(this,tr("Boogity"),tr("Hello!"));
}
