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
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSlider *horizontalSlider;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_3;
    QVBoxLayout *vboxLayout;
    QSpacerItem *verticalSpacer;
    QFrame *frame1;
    QDial *dial;
    QDial *dial_2;
    QDial *dial_3;
    QDial *dial_4;
    QDial *dial_5;
    QLabel *label_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
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
        frame1->setMaximumSize(QSize(300, 300));
        dial = new QDial(frame1);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(20, 100, 80, 80));
        dial_2 = new QDial(frame1);
        dial_2->setObjectName(QStringLiteral("dial_2"));
        dial_2->setGeometry(QRect(100, 100, 80, 80));
        dial_3 = new QDial(frame1);
        dial_3->setObjectName(QStringLiteral("dial_3"));
        dial_3->setGeometry(QRect(180, 100, 80, 80));
        dial_4 = new QDial(frame1);
        dial_4->setObjectName(QStringLiteral("dial_4"));
        dial_4->setGeometry(QRect(60, 190, 80, 80));
        dial_5 = new QDial(frame1);
        dial_5->setObjectName(QStringLiteral("dial_5"));
        dial_5->setGeometry(QRect(150, 190, 80, 80));
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
        pushButton_2->setText(QApplication::translate("MainWindow", "Search", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Label", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "ANNe", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "Mode 1", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "Mode 2", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("MainWindow", "Mode 3", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("MainWindow", "Mode 4", Q_NULLPTR));
        radioButton_5->setText(QApplication::translate("MainWindow", "Mode 5", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
