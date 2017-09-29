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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QFrame *frame;
    QGridLayout *gridLayout;
    QFrame *upperFrame;
    QGridLayout *_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSlider *horizontalSlider;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_2;
    QFrame *frame_3;
    QPushButton *option1;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 400);
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
        pushButton_2 = new QPushButton(upperFrame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        _2->addWidget(pushButton_2, 0, 4, 1, 1);

        pushButton = new QPushButton(upperFrame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setAutoDefault(false);

        _2->addWidget(pushButton, 0, 0, 1, 1);

        horizontalSlider = new QSlider(upperFrame);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximumSize(QSize(100, 16777215));
        horizontalSlider->setOrientation(Qt::Horizontal);

        _2->addWidget(horizontalSlider, 0, 1, 1, 1);

        label = new QLabel(upperFrame);
        label->setObjectName(QStringLiteral("label"));

        _2->addWidget(label, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(70, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(horizontalSpacer_2, 0, 5, 1, 1);


        gridLayout->addWidget(upperFrame, 0, 0, 1, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setEnabled(true);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 150, 1200));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        option1 = new QPushButton(frame_3);
        option1->setObjectName(QStringLiteral("option1"));
        option1->setGeometry(QRect(30, 20, 80, 24));

        gridLayout->addWidget(frame_2, 1, 0, 40, 1);

        MainWindow->setCentralWidget(frame);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "JT's Cool Project", Q_NULLPTR));
        upperFrame->setStyleSheet(QApplication::translate("MainWindow", "background-color: white;", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Search", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Label", Q_NULLPTR));
        frame_2->setStyleSheet(QApplication::translate("MainWindow", "background-color: blue;", Q_NULLPTR));
        frame_3->setStyleSheet(QApplication::translate("MainWindow", "background-color: green;", Q_NULLPTR));
        option1->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
