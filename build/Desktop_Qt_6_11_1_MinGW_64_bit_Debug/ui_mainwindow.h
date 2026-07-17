/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txtUsername;
    QLineEdit *txtPassword;
    QPushButton *btnLogin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1000, 650);
        MainWindow->setMinimumSize(QSize(1000, 650));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 10, 331, 20));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 40, 81, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(150, 70, 81, 16));
        txtUsername = new QLineEdit(centralwidget);
        txtUsername->setObjectName("txtUsername");
        txtUsername->setGeometry(QRect(120, 100, 113, 20));
        txtPassword = new QLineEdit(centralwidget);
        txtPassword->setObjectName("txtPassword");
        txtPassword->setGeometry(QRect(120, 130, 113, 20));
        txtPassword->setEchoMode(QLineEdit::EchoMode::Password);
        btnLogin = new QPushButton(centralwidget);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setGeometry(QRect(140, 160, 80, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        btnLogin->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Smart Billing System ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "     SMART BILLING SYSTEM", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", " Username", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "  Password", nullptr));
        txtUsername->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Username", nullptr));
        txtPassword->setText(QCoreApplication::translate("MainWindow", "8907", nullptr));
        txtPassword->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Password", nullptr));
        btnLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
