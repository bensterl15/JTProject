/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QFrame *frame;
    QGridLayout *gridLayout;
    QFrame *upperFrame;
    QGridLayout *_2;
    QPushButton *playOutputButton;
    QPushButton *searchButton;
    QPushButton *playButton;
    QLabel *audioLabel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *outputLabel;
    QSlider *volume;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_3;
    QVBoxLayout *vboxLayout;
    QSpacerItem *verticalSpacer;
    QFrame *frame1;
    QDial *d1;
    QDial *d2;
    QDial *d3;
    QDial *d4;
    QDial *d5;
    QLabel *label_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QPushButton *generateButton;
    QSlider *p1;
    QSlider *p2;
    QSlider *p3;
    QSlider *p4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(926, 652);
        frame = new QFrame(MainWindow);
        frame->setObjectName(QStringLiteral("frame"));
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        upperFrame = new QFrame(frame);
        upperFrame->setObjectName(QStringLiteral("upperFrame"));
        _2 = new QGridLayout(upperFrame);
        _2->setSpacing(6);
        _2->setContentsMargins(11, 11, 11, 11);
        _2->setObjectName(QStringLiteral("_2"));
        playOutputButton = new QPushButton(upperFrame);
        playOutputButton->setObjectName(QStringLiteral("playOutputButton"));

        _2->addWidget(playOutputButton, 1, 1, 1, 1);

        searchButton = new QPushButton(upperFrame);
        searchButton->setObjectName(QStringLiteral("searchButton"));

        _2->addWidget(searchButton, 0, 5, 1, 1);

        playButton = new QPushButton(upperFrame);
        playButton->setObjectName(QStringLiteral("playButton"));
        playButton->setAutoDefault(false);

        _2->addWidget(playButton, 0, 1, 1, 1);

        audioLabel = new QLabel(upperFrame);
        audioLabel->setObjectName(QStringLiteral("audioLabel"));

        _2->addWidget(audioLabel, 0, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(horizontalSpacer_2, 0, 6, 1, 1);

        horizontalSpacer = new QSpacerItem(70, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(horizontalSpacer, 0, 3, 1, 1);

        outputLabel = new QLabel(upperFrame);
        outputLabel->setObjectName(QStringLiteral("outputLabel"));

        _2->addWidget(outputLabel, 1, 3, 1, 1);

        volume = new QSlider(upperFrame);
        volume->setObjectName(QStringLiteral("volume"));
        volume->setMaximumSize(QSize(100, 16777215));
        volume->setValue(50);
        volume->setOrientation(Qt::Horizontal);

        _2->addWidget(volume, 0, 0, 1, 1);


        gridLayout->addWidget(upperFrame, 0, 0, 1, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        hboxLayout = new QHBoxLayout(frame_2);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_3);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setMaximumSize(QSize(300, 16777215));
        vboxLayout = new QVBoxLayout(frame_3);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        vboxLayout->addItem(verticalSpacer);

        frame1 = new QFrame(frame_3);
        frame1->setObjectName(QStringLiteral("frame1"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame1->sizePolicy().hasHeightForWidth());
        frame1->setSizePolicy(sizePolicy1);
        frame1->setMaximumSize(QSize(300, 400));
        d1 = new QDial(frame1);
        d1->setObjectName(QStringLiteral("d1"));
        d1->setGeometry(QRect(20, 100, 80, 80));
        d2 = new QDial(frame1);
        d2->setObjectName(QStringLiteral("d2"));
        d2->setGeometry(QRect(100, 100, 80, 80));
        d3 = new QDial(frame1);
        d3->setObjectName(QStringLiteral("d3"));
        d3->setGeometry(QRect(180, 100, 80, 80));
        d4 = new QDial(frame1);
        d4->setObjectName(QStringLiteral("d4"));
        d4->setGeometry(QRect(60, 190, 80, 80));
        d5 = new QDial(frame1);
        d5->setObjectName(QStringLiteral("d5"));
        d5->setGeometry(QRect(150, 190, 80, 80));
        label_2 = new QLabel(frame1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 60, 21));
        QFont font;
        font.setFamily(QStringLiteral("Sans Serif"));
        font.setPointSize(16);
        label_2->setFont(font);
        radioButton = new QRadioButton(frame1);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(120, 10, 105, 22));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(frame1);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(120, 30, 105, 22));
        radioButton_3 = new QRadioButton(frame1);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(120, 50, 105, 22));
        radioButton_4 = new QRadioButton(frame1);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(200, 10, 71, 22));
        radioButton_5 = new QRadioButton(frame1);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(200, 30, 71, 22));
        generateButton = new QPushButton(frame1);
        generateButton->setObjectName(QStringLiteral("generateButton"));
        generateButton->setGeometry(QRect(20, 50, 80, 24));
        p1 = new QSlider(frame1);
        p1->setObjectName(QStringLiteral("p1"));
        p1->setGeometry(QRect(10, 280, 251, 16));
        p1->setMaximum(64);
        p1->setValue(15);
        p1->setOrientation(Qt::Horizontal);
        p2 = new QSlider(frame1);
        p2->setObjectName(QStringLiteral("p2"));
        p2->setGeometry(QRect(10, 300, 251, 16));
        p2->setMaximum(64);
        p2->setValue(30);
        p2->setOrientation(Qt::Horizontal);
        p3 = new QSlider(frame1);
        p3->setObjectName(QStringLiteral("p3"));
        p3->setGeometry(QRect(10, 320, 251, 16));
        p3->setMaximum(64);
        p3->setValue(45);
        p3->setOrientation(Qt::Horizontal);
        p4 = new QSlider(frame1);
        p4->setObjectName(QStringLiteral("p4"));
        p4->setGeometry(QRect(10, 340, 251, 16));
        p4->setMaximum(64);
        p4->setValue(60);
        p4->setOrientation(Qt::Horizontal);

        vboxLayout->addWidget(frame1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        vboxLayout->addItem(verticalSpacer_2);


        hboxLayout->addWidget(frame_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_4);


        gridLayout->addWidget(frame_2, 1, 0, 40, 1);

        MainWindow->setCentralWidget(frame);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "JT's Cool Project", Q_NULLPTR));
        upperFrame->setStyleSheet(QApplication::translate("MainWindow", "background-color: white;", Q_NULLPTR));
        playOutputButton->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
        searchButton->setText(QApplication::translate("MainWindow", "Search", Q_NULLPTR));
        playButton->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
        audioLabel->setText(QApplication::translate("MainWindow", "Label", Q_NULLPTR));
        outputLabel->setText(QApplication::translate("MainWindow", "Label", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "ANNe", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "Mode 1", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "Mode 2", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("MainWindow", "Mode 3", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("MainWindow", "Mode 4", Q_NULLPTR));
        radioButton_5->setText(QApplication::translate("MainWindow", "Mode 5", Q_NULLPTR));
        generateButton->setText(QApplication::translate("MainWindow", "Generate", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
