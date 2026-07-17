/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QWidget *centralwidget;
    QLabel *lblTitle;
    QPushButton *btnProducts;
    QPushButton *btnBilling;
    QPushButton *btnReports;
    QPushButton *btnLogout;
    QLabel *lblsales;
    QLabel *lblProducts;
    QLabel *lblcustomers;
    QLabel *lblbills;
    QLabel *lblwelcome;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(800, 600);
        centralwidget = new QWidget(Dashboard);
        centralwidget->setObjectName("centralwidget");
        lblTitle = new QLabel(centralwidget);
        lblTitle->setObjectName("lblTitle");
        lblTitle->setGeometry(QRect(120, 10, 221, 20));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        lblTitle->setFont(font);
        btnProducts = new QPushButton(centralwidget);
        btnProducts->setObjectName("btnProducts");
        btnProducts->setGeometry(QRect(30, 40, 80, 18));
        QFont font1;
        font1.setBold(true);
        btnProducts->setFont(font1);
        btnBilling = new QPushButton(centralwidget);
        btnBilling->setObjectName("btnBilling");
        btnBilling->setGeometry(QRect(30, 70, 80, 18));
        btnBilling->setFont(font1);
        btnReports = new QPushButton(centralwidget);
        btnReports->setObjectName("btnReports");
        btnReports->setGeometry(QRect(30, 100, 80, 18));
        btnReports->setFont(font1);
        btnLogout = new QPushButton(centralwidget);
        btnLogout->setObjectName("btnLogout");
        btnLogout->setGeometry(QRect(30, 130, 80, 18));
        btnLogout->setFont(font1);
        lblsales = new QLabel(centralwidget);
        lblsales->setObjectName("lblsales");
        lblsales->setGeometry(QRect(180, 40, 91, 16));
        lblProducts = new QLabel(centralwidget);
        lblProducts->setObjectName("lblProducts");
        lblProducts->setGeometry(QRect(180, 70, 81, 16));
        lblcustomers = new QLabel(centralwidget);
        lblcustomers->setObjectName("lblcustomers");
        lblcustomers->setGeometry(QRect(180, 100, 81, 16));
        lblbills = new QLabel(centralwidget);
        lblbills->setObjectName("lblbills");
        lblbills->setGeometry(QRect(190, 130, 71, 20));
        lblwelcome = new QLabel(centralwidget);
        lblwelcome->setObjectName("lblwelcome");
        lblwelcome->setGeometry(QRect(120, 170, 241, 20));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        lblwelcome->setFont(font2);
        Dashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Dashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        Dashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(Dashboard);
        statusbar->setObjectName("statusbar");
        Dashboard->setStatusBar(statusbar);

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "MainWindow", nullptr));
        lblTitle->setText(QCoreApplication::translate("Dashboard", "SMART BILLING SYSTEM ", nullptr));
        btnProducts->setText(QCoreApplication::translate("Dashboard", "Products", nullptr));
        btnBilling->setText(QCoreApplication::translate("Dashboard", "Billing", nullptr));
        btnReports->setText(QCoreApplication::translate("Dashboard", "Reports", nullptr));
        btnLogout->setText(QCoreApplication::translate("Dashboard", "Logout", nullptr));
        lblsales->setText(QCoreApplication::translate("Dashboard", "Today's Sales : \342\202\2710", nullptr));
        lblProducts->setText(QCoreApplication::translate("Dashboard", "Total Products : 0", nullptr));
        lblcustomers->setText(QCoreApplication::translate("Dashboard", "Total Customers : 0", nullptr));
        lblbills->setText(QCoreApplication::translate("Dashboard", "Total Bills : 0", nullptr));
        lblwelcome->setText(QCoreApplication::translate("Dashboard", "   Welcome to Smart Billing System     ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
