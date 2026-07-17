/********************************************************************************
** Form generated from reading UI file 'salesreport.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALESREPORT_H
#define UI_SALESREPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SalesReport
{
public:
    QWidget *centralwidget;
    QLabel *lblSalesReport;
    QPushButton *btnTotalBills;
    QPushButton *btnTotalSales;
    QPushButton *btnTodaySales;
    QLabel *lblBillsValue;
    QLabel *lblSalesValue;
    QLabel *lblTodayValue;
    QTableWidget *tableSales;
    QPushButton *btnBack;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SalesReport)
    {
        if (SalesReport->objectName().isEmpty())
            SalesReport->setObjectName("SalesReport");
        SalesReport->resize(800, 600);
        centralwidget = new QWidget(SalesReport);
        centralwidget->setObjectName("centralwidget");
        lblSalesReport = new QLabel(centralwidget);
        lblSalesReport->setObjectName("lblSalesReport");
        lblSalesReport->setGeometry(QRect(110, 10, 211, 20));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        lblSalesReport->setFont(font);
        btnTotalBills = new QPushButton(centralwidget);
        btnTotalBills->setObjectName("btnTotalBills");
        btnTotalBills->setGeometry(QRect(20, 40, 81, 16));
        QFont font1;
        font1.setBold(true);
        btnTotalBills->setFont(font1);
        btnTotalSales = new QPushButton(centralwidget);
        btnTotalSales->setObjectName("btnTotalSales");
        btnTotalSales->setGeometry(QRect(20, 60, 80, 18));
        btnTotalSales->setFont(font1);
        btnTodaySales = new QPushButton(centralwidget);
        btnTodaySales->setObjectName("btnTodaySales");
        btnTodaySales->setGeometry(QRect(20, 80, 80, 18));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        btnTodaySales->setFont(font2);
        lblBillsValue = new QLabel(centralwidget);
        lblBillsValue->setObjectName("lblBillsValue");
        lblBillsValue->setGeometry(QRect(130, 40, 161, 16));
        lblSalesValue = new QLabel(centralwidget);
        lblSalesValue->setObjectName("lblSalesValue");
        lblSalesValue->setGeometry(QRect(130, 60, 181, 16));
        lblTodayValue = new QLabel(centralwidget);
        lblTodayValue->setObjectName("lblTodayValue");
        lblTodayValue->setGeometry(QRect(130, 80, 191, 16));
        tableSales = new QTableWidget(centralwidget);
        if (tableSales->columnCount() < 5)
            tableSales->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableSales->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableSales->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableSales->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableSales->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableSales->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableSales->setObjectName("tableSales");
        tableSales->setGeometry(QRect(20, 110, 381, 101));
        QFont font3;
        font3.setBold(true);
        font3.setItalic(true);
        tableSales->setFont(font3);
        btnBack = new QPushButton(centralwidget);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(40, 210, 80, 16));
        btnBack->setFont(font1);
        SalesReport->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SalesReport);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        SalesReport->setMenuBar(menubar);
        statusbar = new QStatusBar(SalesReport);
        statusbar->setObjectName("statusbar");
        SalesReport->setStatusBar(statusbar);

        retranslateUi(SalesReport);

        QMetaObject::connectSlotsByName(SalesReport);
    } // setupUi

    void retranslateUi(QMainWindow *SalesReport)
    {
        SalesReport->setWindowTitle(QCoreApplication::translate("SalesReport", "MainWindow", nullptr));
        lblSalesReport->setText(QCoreApplication::translate("SalesReport", "               SALES REPORT", nullptr));
        btnTotalBills->setText(QCoreApplication::translate("SalesReport", "Total Bills", nullptr));
        btnTotalSales->setText(QCoreApplication::translate("SalesReport", "Total Sales", nullptr));
        btnTodaySales->setText(QCoreApplication::translate("SalesReport", "Today's Sales", nullptr));
        lblBillsValue->setText(QCoreApplication::translate("SalesReport", ": 0", nullptr));
        lblSalesValue->setText(QCoreApplication::translate("SalesReport", "\342\202\271", nullptr));
        lblTodayValue->setText(QCoreApplication::translate("SalesReport", "\342\202\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableSales->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SalesReport", "BillId", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableSales->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SalesReport", "Customer Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableSales->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SalesReport", "Mobile", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableSales->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SalesReport", "Grand Total", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableSales->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("SalesReport", "Date", nullptr));
        btnBack->setText(QCoreApplication::translate("SalesReport", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SalesReport: public Ui_SalesReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALESREPORT_H
