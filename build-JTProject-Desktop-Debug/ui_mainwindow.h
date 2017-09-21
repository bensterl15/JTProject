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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QFrame *frame;
    QFrame *upperFrame;
    QPushButton *pressme;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 400);
        frame = new QFrame(MainWindow);
        frame->setObjectName(QStringLiteral("frame"));
        upperFrame = new QFrame(frame);
        upperFrame->setObjectName(QStringLiteral("upperFrame"));
        upperFrame->setGeometry(QRect(0, 0, 1000, 50));
        pressme = new QPushButton(upperFrame);
        pressme->setObjectName(QStringLiteral("pressme"));
        pressme->setGeometry(QRect(0, 0, 81, 50));
        MainWindow->setCentralWidget(frame);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "JT's Cool Project", Q_NULLPTR));
        upperFrame->setStyleSheet(QApplication::translate("MainWindow", "background-color: white;", Q_NULLPTR));
        pressme->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
