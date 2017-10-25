#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>

#define DIAL1DEG -60
#define DIAL2DEG -30
#define DIAL3DEG 0
#define DIAL4DEG 30
#define DIAL5DEG 60

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPushButton *playButton = this->findChild<QPushButton*>("playButton");
    QPushButton *searchButton = this->findChild<QPushButton*>("searchButton");
    QPushButton *generateButton = this->findChild<QPushButton*>("generateButton");
    QPushButton *playOutputButton = this->findChild<QPushButton*>("playOutputButton");

    ///Handle the small dials here!
    QDial *d1 = this->findChild<QDial*>("d1");
    QDial *d2 = this->findChild<QDial*>("d2");
    QDial *d3 = this->findChild<QDial*>("d3");
    QDial *d4 = this->findChild<QDial*>("d4");
    QDial *d5 = this->findChild<QDial*>("d5");

    this->findChild<QLabel *>("d1Label")->setAlignment(Qt::AlignCenter);

    d1->setUpdatesEnabled(false);
    d2->setUpdatesEnabled(false);
    d3->setUpdatesEnabled(false);
    d4->setUpdatesEnabled(false);
    d5->setUpdatesEnabled(false);

    QObject::connect(d1,&QDial::valueChanged,this,&MainWindow::d1Changed);
    QObject::connect(d2,&QDial::valueChanged,this,&MainWindow::d2Changed);
    QObject::connect(d3,&QDial::valueChanged,this,&MainWindow::d3Changed);
    QObject::connect(d4,&QDial::valueChanged,this,&MainWindow::d4Changed);
    QObject::connect(d5,&QDial::valueChanged,this,&MainWindow::d5Changed);
    ///

    ///Handle the big dials here!
    QDial *dMode = this->findChild<QDial*>("dMode");
    QObject::connect(dMode,&QDial::valueChanged,this,&MainWindow::modeChange);
    dMode->setUpdatesEnabled(false);

    QDial *dAuxIn = this->findChild<QDial *>("dAuxIn");
    QObject::connect(dAuxIn,&QDial::valueChanged,this,&MainWindow::auxChange);
    dAuxIn->setUpdatesEnabled(false);

    QLabel *dModeLabel = this->findChild<QLabel*>("dModeLabel");
    dModeLabel->setPixmap(rotatePixmap(":/bigknob/big_knob.png",DIAL1DEG,0));

    QLabel *dAuxInLabel = this->findChild<QLabel*>("dAuxInLabel");
    dAuxInLabel->setPixmap(rotatePixmap(":/bigknob/big_knob.png",DIAL1DEG,0));
    ///

    QSlider *p1 = this->findChild<QSlider*>("p1");
    QSlider *p2 = this->findChild<QSlider*>("p2");
    QSlider *p3 = this->findChild<QSlider*>("p3");
    QSlider *p4 = this->findChild<QSlider*>("p4");

    p1->setOrientation(Qt::Horizontal);
    p2->setOrientation(Qt::Horizontal);
    p3->setOrientation(Qt::Horizontal);
    p4->setOrientation(Qt::Horizontal);

    p1->setRange(1,64);
    p2->setRange(1,64);
    p3->setRange(1,64);
    p4->setRange(1,64);

    p1->setValue(12);
    p2->setValue(24);
    p3->setValue(36);
    p4->setValue(48);

    QObject::connect(playButton,&QPushButton::clicked,this,&MainWindow::playFunction);
    QObject::connect(searchButton,&QPushButton::clicked,this,&MainWindow::searchFunction);
    QObject::connect(generateButton,&QPushButton::clicked,this,&MainWindow::generateFunction);
    QObject::connect(playOutputButton,&QPushButton::clicked,this,&MainWindow::playOutputFunction);

    QObject::connect(p1,&QSlider::sliderReleased,this,&MainWindow::resetBounds);
    QObject::connect(p2,&QSlider::sliderReleased,this,&MainWindow::resetBounds);
    QObject::connect(p3,&QSlider::sliderReleased,this,&MainWindow::resetBounds);
    QObject::connect(p4,&QSlider::sliderReleased,this,&MainWindow::resetBounds);
    resetBounds();


    terminalPointer = popen("cd ../JTModel/; python3 ann.py","w");
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

    int p1_ = p1->value();
    int p2_ = p2->value();
    int p3_ = p3->value();
    int p4_ = p4->value();

    QString s1="",s2="",s3="",s4="",s5="";
    int i = 0;
    for(i = 0;  i < p1_; i++) s1 += QString::fromStdString(std::to_string(((float)d1->value()/100 + 0.1)*5)) + ",";
    for(i = p1_; i < p2_; i++) s2 += QString::fromStdString(std::to_string(((float)d2->value()/100 + 0.1)*5)) + ",";
    for(i = p2_; i < p3_; i++) s3 += QString::fromStdString(std::to_string(((float)d3->value()/100 + 0.1)*5)) + ",";
    for(i = p3_; i < p4_; i++) s4 += QString::fromStdString(std::to_string(((float)d4->value()/100 + 0.1)*5)) + ",";
    for(i = p4_; i < 64; i++) s5 += QString::fromStdString(std::to_string(((float)d5->value()/100 + 0.1)*5)) + ",";

    //Remove the last comma in the number sequence!
    s5 = QString::fromStdString(s5.toStdString().substr(0, s5.size() - 1));

    QString mstr = str + " " +
                    s1 +
                    s2 +
                    s3 +
                    s4 +
                    s5 +
            " out\n";
    printf("===============%s",(char *) mstr.toLatin1().data());
    //QMessageBox::information(this,tr("ugh"),QString::fromStdString(std::string(d1->value())));
    //executeTerminalCommand((char *) mstr.toLatin1().data());
    fputs((char*) mstr.toLatin1().data(),terminalPointer);
    fflush(terminalPointer);

    std::string otherStr = str.toLatin1().data();
    otherStr = std::regex_replace(otherStr,std::regex("\\.wav"),"_out");
    this->findChild<QLabel*>("outputLabel")->setText(QString::fromStdString(otherStr));
}

void MainWindow::searchFunction(){
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"/path/to/file/",tr("Wav Files (*.wav)"));
    QLabel *audioLabel = this->findChild<QLabel*>("audioLabel");
    audioLabel->setText(fileName);
}

void MainWindow::modeChange(){
    QLabel *dModeLabel = this->findChild<QLabel*>("dModeLabel");

    QDial *dMode = this->findChild<QDial*>("dMode");
    for(int i = 0; i < 4; i++){
        resetBounds();
        switch(dMode->value()){
            case 0:
                dModeLabel->setPixmap(rotatePixmap(":/bigknob/big_knob.png",DIAL1DEG,0));
                applyMode(12,24,36,48);
            break;

            case 1:
                dModeLabel->setPixmap(rotatePixmap(":/bigknob/big_knob.png",DIAL2DEG,0));
                applyMode(4,12,28,60);
            break;

            case 2:
                dModeLabel->setPixmap(rotatePixmap(":/bigknob/big_knob.png",DIAL3DEG,0));
                applyMode(32,48,56,60);
            break;

            case 3:
                dModeLabel->setPixmap(rotatePixmap(":/bigknob/big_knob.png",DIAL4DEG,0));
                applyMode(20,24,28,32);
            break;

            case 4:
                dModeLabel->setPixmap(rotatePixmap(":/bigknob/big_knob.png",DIAL5DEG,0));
                applyMode(4,8,24,50);
            break;
        }
    }
    dModeLabel->setStyleSheet("background-image: url(:/null_selection/null_selection.png);");
}

void MainWindow::auxChange(){
    QLabel *dAuxInLabel = this->findChild<QLabel*>("dAuxInLabel");

    QDial *dAuxIn = this->findChild<QDial*>("dAuxIn");
    for(int i = 0; i < 4; i++){
        switch(dAuxIn->value()){
            case 0:
                dAuxInLabel->setPixmap(rotatePixmap(":/bigknob/big_knob.png",DIAL1DEG,0));
            break;

            case 1:
                dAuxInLabel->setPixmap(rotatePixmap(":/bigknob/big_knob.png",DIAL2DEG,0));
            break;

            case 2:
                dAuxInLabel->setPixmap(rotatePixmap(":/bigknob/big_knob.png",DIAL3DEG,0));
            break;

            case 3:
                dAuxInLabel->setPixmap(rotatePixmap(":/bigknob/big_knob.png",DIAL4DEG,0));
            break;

            case 4:
                dAuxInLabel->setPixmap(rotatePixmap(":/bigknob/big_knob.png",DIAL5DEG,0));
            break;
        }
    }
    dAuxInLabel->setStyleSheet("background-image: url(:/null_selection/null_selection.png);");
}

void MainWindow::d1Changed(){
    QDial *d = this->findChild<QDial *>("d1");
    QLabel *label = this->findChild<QLabel *>("d1Label");
    label->setPixmap(rotatePixmap(":/littleknob/littleknob.png",(d->value()*3.6 - 180)/1.1,1));
}

void MainWindow::d2Changed(){
    QDial *d = this->findChild<QDial *>("d2");
    QLabel *label = this->findChild<QLabel *>("d2Label");
    label->setPixmap(rotatePixmap(":/littleknob/littleknob.png",(d->value()*3.6 - 180)/1.1,1));
}

void MainWindow::d3Changed(){
    QDial *d = this->findChild<QDial *>("d3");
    QLabel *label = this->findChild<QLabel *>("d3Label");
    label->setPixmap(rotatePixmap(":/littleknob/littleknob.png",(d->value()*3.6 - 180)/1.1,1));
}

void MainWindow::d4Changed(){
    QDial *d = this->findChild<QDial *>("d4");
    QLabel *label = this->findChild<QLabel *>("d4Label");
    label->setPixmap(rotatePixmap(":/littleknob/littleknob.png",(d->value()*3.6 - 180)/1.1,1));
}

void MainWindow::d5Changed(){
    QDial *d = this->findChild<QDial *>("d5");
    QLabel *label = this->findChild<QLabel *>("d5Label");
    label->setPixmap(rotatePixmap(":/littleknob/littleknob.png",(d->value()*3.6 - 180)/1.1,1));
}

MainWindow::~MainWindow()
{
    delete ui;
}
