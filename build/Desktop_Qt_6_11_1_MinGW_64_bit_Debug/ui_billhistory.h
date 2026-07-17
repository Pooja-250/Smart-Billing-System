/********************************************************************************
** Form generated from reading UI file 'billhistory.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILLHISTORY_H
#define UI_BILLHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BillHistory
{
public:
    QWidget *centralwidget;
    QTableWidget *tableBillHistory;
    QPushButton *btnBillHistory;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BillHistory)
    {
        if (BillHistory->objectName().isEmpty())
            BillHistory->setObjectName("BillHistory");
        BillHistory->resize(800, 600);
        centralwidget = new QWidget(BillHistory);
        centralwidget->setObjectName("centralwidget");
        tableBillHistory = new QTableWidget(centralwidget);
        if (tableBillHistory->columnCount() < 5)
            tableBillHistory->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableBillHistory->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableBillHistory->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableBillHistory->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableBillHistory->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableBillHistory->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableBillHistory->setObjectName("tableBillHistory");
        tableBillHistory->setGeometry(QRect(30, 90, 371, 111));
        btnBillHistory = new QPushButton(centralwidget);
        btnBillHistory->setObjectName("btnBillHistory");
        btnBillHistory->setGeometry(QRect(40, 20, 80, 18));
        BillHistory->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BillHistory);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        BillHistory->setMenuBar(menubar);
        statusbar = new QStatusBar(BillHistory);
        statusbar->setObjectName("statusbar");
        BillHistory->setStatusBar(statusbar);

        retranslateUi(BillHistory);

        QMetaObject::connectSlotsByName(BillHistory);
    } // setupUi

    void retranslateUi(QMainWindow *BillHistory)
    {
        BillHistory->setWindowTitle(QCoreApplication::translate("BillHistory", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableBillHistory->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("BillHistory", "Bill Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableBillHistory->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("BillHistory", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableBillHistory->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("BillHistory", "Customer Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableBillHistory->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("BillHistory", "Mobile no.", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableBillHistory->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("BillHistory", "Date", nullptr));
        btnBillHistory->setText(QCoreApplication::translate("BillHistory", "Bill History", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BillHistory: public Ui_BillHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILLHISTORY_H
