/********************************************************************************
** Form generated from reading UI file 'billing.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILLING_H
#define UI_BILLING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Billing
{
public:
    QWidget *centralwidget;
    QLabel *lblBilling;
    QLabel *lblCustomerName;
    QLabel *lblMobileNo;
    QLabel *lblProduct;
    QLabel *lblPrice;
    QLineEdit *txtCustomer;
    QLineEdit *txtMobile;
    QLineEdit *txtPrice;
    QLabel *lblQunatity;
    QLineEdit *txtQunatity;
    QComboBox *cmbProduct;
    QPushButton *btnAddToBill;
    QTableWidget *tableWidget;
    QLabel *lblGrandTotal;
    QPushButton *btnRemoveItem;
    QPushButton *btnClearBill;
    QPushButton *btnGenBill;
    QPushButton *btnBack;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Billing)
    {
        if (Billing->objectName().isEmpty())
            Billing->setObjectName("Billing");
        Billing->resize(1000, 650);
        Billing->setMinimumSize(QSize(1000, 650));
        Billing->setSizeIncrement(QSize(1, 0));
        centralwidget = new QWidget(Billing);
        centralwidget->setObjectName("centralwidget");
        lblBilling = new QLabel(centralwidget);
        lblBilling->setObjectName("lblBilling");
        lblBilling->setGeometry(QRect(110, 0, 251, 20));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        lblBilling->setFont(font);
        lblCustomerName = new QLabel(centralwidget);
        lblCustomerName->setObjectName("lblCustomerName");
        lblCustomerName->setGeometry(QRect(30, 30, 71, 16));
        QFont font1;
        font1.setBold(true);
        lblCustomerName->setFont(font1);
        lblMobileNo = new QLabel(centralwidget);
        lblMobileNo->setObjectName("lblMobileNo");
        lblMobileNo->setGeometry(QRect(30, 50, 71, 16));
        lblMobileNo->setFont(font1);
        lblProduct = new QLabel(centralwidget);
        lblProduct->setObjectName("lblProduct");
        lblProduct->setGeometry(QRect(40, 70, 37, 16));
        lblProduct->setFont(font1);
        lblPrice = new QLabel(centralwidget);
        lblPrice->setObjectName("lblPrice");
        lblPrice->setGeometry(QRect(40, 90, 37, 12));
        lblPrice->setFont(font1);
        txtCustomer = new QLineEdit(centralwidget);
        txtCustomer->setObjectName("txtCustomer");
        txtCustomer->setGeometry(QRect(130, 30, 113, 16));
        txtMobile = new QLineEdit(centralwidget);
        txtMobile->setObjectName("txtMobile");
        txtMobile->setGeometry(QRect(130, 50, 113, 16));
        txtPrice = new QLineEdit(centralwidget);
        txtPrice->setObjectName("txtPrice");
        txtPrice->setGeometry(QRect(80, 90, 113, 16));
        lblQunatity = new QLabel(centralwidget);
        lblQunatity->setObjectName("lblQunatity");
        lblQunatity->setGeometry(QRect(210, 90, 41, 16));
        lblQunatity->setFont(font1);
        txtQunatity = new QLineEdit(centralwidget);
        txtQunatity->setObjectName("txtQunatity");
        txtQunatity->setGeometry(QRect(260, 90, 113, 16));
        cmbProduct = new QComboBox(centralwidget);
        cmbProduct->setObjectName("cmbProduct");
        cmbProduct->setGeometry(QRect(130, 70, 111, 16));
        btnAddToBill = new QPushButton(centralwidget);
        btnAddToBill->setObjectName("btnAddToBill");
        btnAddToBill->setGeometry(QRect(170, 110, 80, 18));
        btnAddToBill->setFont(font1);
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(30, 130, 371, 71));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(true);
        tableWidget->setFont(font2);
        lblGrandTotal = new QLabel(centralwidget);
        lblGrandTotal->setObjectName("lblGrandTotal");
        lblGrandTotal->setGeometry(QRect(40, 200, 91, 16));
        lblGrandTotal->setFont(font1);
        btnRemoveItem = new QPushButton(centralwidget);
        btnRemoveItem->setObjectName("btnRemoveItem");
        btnRemoveItem->setGeometry(QRect(20, 220, 80, 16));
        btnRemoveItem->setFont(font1);
        btnRemoveItem->setIconSize(QSize(10, 12));
        btnClearBill = new QPushButton(centralwidget);
        btnClearBill->setObjectName("btnClearBill");
        btnClearBill->setGeometry(QRect(190, 210, 80, 16));
        btnClearBill->setFont(font1);
        btnGenBill = new QPushButton(centralwidget);
        btnGenBill->setObjectName("btnGenBill");
        btnGenBill->setGeometry(QRect(270, 210, 80, 16));
        btnGenBill->setFont(font1);
        btnBack = new QPushButton(centralwidget);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(350, 210, 61, 16));
        btnBack->setFont(font1);
        Billing->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Billing);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 17));
        Billing->setMenuBar(menubar);
        statusbar = new QStatusBar(Billing);
        statusbar->setObjectName("statusbar");
        Billing->setStatusBar(statusbar);

        retranslateUi(Billing);

        QMetaObject::connectSlotsByName(Billing);
    } // setupUi

    void retranslateUi(QMainWindow *Billing)
    {
        Billing->setWindowTitle(QCoreApplication::translate("Billing", "MainWindow", nullptr));
        lblBilling->setText(QCoreApplication::translate("Billing", "                    BILLING SYSTEM", nullptr));
        lblCustomerName->setText(QCoreApplication::translate("Billing", " Customer Name", nullptr));
        lblMobileNo->setText(QCoreApplication::translate("Billing", " Mobile Number", nullptr));
        lblProduct->setText(QCoreApplication::translate("Billing", " Product ", nullptr));
        lblPrice->setText(QCoreApplication::translate("Billing", "  Price", nullptr));
        lblQunatity->setText(QCoreApplication::translate("Billing", "Qunatity", nullptr));
        btnAddToBill->setText(QCoreApplication::translate("Billing", "Add to bill", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Billing", "Product", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Billing", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Billing", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Billing", "Total", nullptr));
        lblGrandTotal->setText(QCoreApplication::translate("Billing", "  Grand Total :     ", nullptr));
        btnRemoveItem->setText(QCoreApplication::translate("Billing", "Remove Item", nullptr));
        btnClearBill->setText(QCoreApplication::translate("Billing", "Clear Bill", nullptr));
        btnGenBill->setText(QCoreApplication::translate("Billing", "Generate Bill", nullptr));
        btnBack->setText(QCoreApplication::translate("Billing", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Billing: public Ui_Billing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILLING_H
