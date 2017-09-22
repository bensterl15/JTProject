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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QFrame *frame;
    QVBoxLayout *vboxLayout;
    QFrame *frame1;
    QHBoxLayout *hboxLayout;
    QFrame *upperFrame;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 400);
        frame = new QFrame(MainWindow);
        frame->setObjectName(QStringLiteral("frame"));
        vboxLayout = new QVBoxLayout(frame);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        frame1 = new QFrame(frame);
        frame1->setObjectName(QStringLiteral("frame1"));
        hboxLayout = new QHBoxLayout(frame1);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        upperFrame = new QFrame(frame1);
        upperFrame->setObjectName(QStringLiteral("upperFrame"));
        hboxLayout1 = new QHBoxLayout(upperFrame);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(11, 11, 11, 11);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        horizontalSpacer_2 = new QSpacerItem(33, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout1->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(upperFrame);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        hboxLayout1->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(137, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout1->addItem(horizontalSpacer);

        label = new QLabel(upperFrame);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout1->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(horizontalSpacer_3);


        hboxLayout->addWidget(upperFrame);


        vboxLayout->addWidget(frame1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(frame);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "JT's Cool Project", Q_NULLPTR));
        upperFrame->setStyleSheet(QApplication::translate("MainWindow", "background-color: white;", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Label", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
