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
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "restrictedslider.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QFrame *frame;
    QGridLayout *gridLayout;
    QFrame *upperFrame;
    QGridLayout *_2;
    QPushButton *playOutputButton;
    QSlider *volume;
    QPushButton *playButton;
    QLabel *outputLabel;
    QPushButton *searchButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
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
    QPushButton *generateButton;
    RestrictedSlider *p1;
    RestrictedSlider *p2;
    RestrictedSlider *p3;
    RestrictedSlider *p4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QDial *dMode;
    QLabel *label;
    QLabel *audioLabel;
    QLabel *label_2;
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

        volume = new QSlider(upperFrame);
        volume->setObjectName(QStringLiteral("volume"));
        volume->setMaximumSize(QSize(100, 16777215));
        volume->setValue(50);
        volume->setOrientation(Qt::Horizontal);

        _2->addWidget(volume, 0, 0, 1, 1);

        playButton = new QPushButton(upperFrame);
        playButton->setObjectName(QStringLiteral("playButton"));
        playButton->setAutoDefault(false);

        _2->addWidget(playButton, 0, 1, 1, 1);

        outputLabel = new QLabel(upperFrame);
        outputLabel->setObjectName(QStringLiteral("outputLabel"));

        _2->addWidget(outputLabel, 1, 3, 1, 1);

        searchButton = new QPushButton(upperFrame);
        searchButton->setObjectName(QStringLiteral("searchButton"));

        _2->addWidget(searchButton, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(70, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(horizontalSpacer, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(horizontalSpacer_2, 0, 5, 1, 1);


        gridLayout->addWidget(upperFrame, 0, 0, 1, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setStyleSheet(QStringLiteral(""));
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
        frame_3->setMaximumSize(QSize(925, 16777215));
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
        frame1->setMaximumSize(QSize(925, 615));
        frame1->setStyleSheet(QStringLiteral("background-image: url(:/background/app_background.jpg);"));
        d1 = new QDial(frame1);
        d1->setObjectName(QStringLiteral("d1"));
        d1->setGeometry(QRect(149, 468, 90, 90));
        d2 = new QDial(frame1);
        d2->setObjectName(QStringLiteral("d2"));
        d2->setGeometry(QRect(280, 486, 90, 90));
        d3 = new QDial(frame1);
        d3->setObjectName(QStringLiteral("d3"));
        d3->setGeometry(QRect(409, 495, 90, 90));
        d4 = new QDial(frame1);
        d4->setObjectName(QStringLiteral("d4"));
        d4->setGeometry(QRect(538, 486, 90, 90));
        d5 = new QDial(frame1);
        d5->setObjectName(QStringLiteral("d5"));
        d5->setGeometry(QRect(667, 468, 90, 90));
        generateButton = new QPushButton(frame1);
        generateButton->setObjectName(QStringLiteral("generateButton"));
        generateButton->setGeometry(QRect(320, 260, 80, 24));
        p1 = new RestrictedSlider(frame1);
        p1->setObjectName(QStringLiteral("p1"));
        p1->setGeometry(QRect(320, 320, 251, 16));
        p2 = new RestrictedSlider(frame1);
        p2->setObjectName(QStringLiteral("p2"));
        p2->setGeometry(QRect(320, 340, 251, 16));
        p2->setProperty("maximum", QVariant(64));
        p2->setProperty("value", QVariant(24));
        p3 = new RestrictedSlider(frame1);
        p3->setObjectName(QStringLiteral("p3"));
        p3->setGeometry(QRect(320, 360, 251, 16));
        p3->setProperty("maximum", QVariant(64));
        p3->setProperty("value", QVariant(36));
        p4 = new RestrictedSlider(frame1);
        p4->setObjectName(QStringLiteral("p4"));
        p4->setGeometry(QRect(320, 380, 251, 16));
        p4->setProperty("maximum", QVariant(64));
        p4->setProperty("value", QVariant(48));
        pushButton = new QPushButton(frame1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(303, 150, 141, 31));
        pushButton->setStyleSheet(QStringLiteral("image: url(:/6button/6button.png);"));
        pushButton_2 = new QPushButton(frame1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(466, 150, 141, 31));
        pushButton_2->setStyleSheet(QStringLiteral("image: url(:/7button/7button.png);"));
        dMode = new QDial(frame1);
        dMode->setObjectName(QStringLiteral("dMode"));
        dMode->setGeometry(QRect(60, 80, 135, 135));
        dMode->setMaximum(4);
        dMode->setValue(0);
        dMode->setSliderPosition(0);
        dMode->setOrientation(Qt::Horizontal);
        label = new QLabel(frame1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 190, 851, 111));
        label->setStyleSheet(QStringLiteral("background-image: url(:/main_label/anne_main_label.png);"));
        audioLabel = new QLabel(frame1);
        audioLabel->setObjectName(QStringLiteral("audioLabel"));
        audioLabel->setGeometry(QRect(311, 83, 285, 51));
        audioLabel->setAutoFillBackground(false);
        audioLabel->setStyleSheet(QStringLiteral("background-image: url(:/null_selection/null_selection.png);"));
        audioLabel->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(frame1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 535, 581, 61));
        label_2->setStyleSheet(QStringLiteral("background-image: url(:/knob_labels/knob_labels.png);"));
        label->raise();
        d1->raise();
        d2->raise();
        d3->raise();
        d4->raise();
        d5->raise();
        generateButton->raise();
        p1->raise();
        p2->raise();
        p3->raise();
        p4->raise();
        pushButton->raise();
        pushButton_2->raise();
        dMode->raise();
        audioLabel->raise();
        label_2->raise();

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
        playButton->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
        outputLabel->setText(QApplication::translate("MainWindow", "Label", Q_NULLPTR));
        searchButton->setText(QApplication::translate("MainWindow", "Search", Q_NULLPTR));
        generateButton->setText(QApplication::translate("MainWindow", "Generate", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label->setText(QString());
        audioLabel->setText(QApplication::translate("MainWindow", "Label", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
