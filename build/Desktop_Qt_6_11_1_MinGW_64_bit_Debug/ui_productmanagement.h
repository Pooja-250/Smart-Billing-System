/********************************************************************************
** Form generated from reading UI file 'productmanagement.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTMANAGEMENT_H
#define UI_PRODUCTMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_ProductManagement
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QPushButton *btnadd;
    QPushButton *btnupdate;
    QPushButton *btndelete;
    QPushButton *btnclear;
    QLineEdit *txtProductName;
    QLineEdit *txtPrice;
    QLineEdit *txtQuantity;
    QLineEdit *txtCategory;
    QLabel *labelProduct;
    QLabel *labelprice;
    QLabel *labelquantity;
    QLabel *labelcategory;
    QTableWidget *tableProducts;
    QLineEdit *txtsearch;
    QLabel *label;
    QPushButton *btnBack;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ProductManagement)
    {
        if (ProductManagement->objectName().isEmpty())
            ProductManagement->setObjectName("ProductManagement");
        ProductManagement->resize(800, 600);
        centralwidget = new QWidget(ProductManagement);
        centralwidget->setObjectName("centralwidget");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(50, 0, 321, 20));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        lineEdit->setFont(font);
        btnadd = new QPushButton(centralwidget);
        btnadd->setObjectName("btnadd");
        btnadd->setGeometry(QRect(0, 100, 71, 16));
        QFont font1;
        font1.setBold(true);
        btnadd->setFont(font1);
        btnupdate = new QPushButton(centralwidget);
        btnupdate->setObjectName("btnupdate");
        btnupdate->setGeometry(QRect(70, 100, 61, 16));
        btnupdate->setFont(font1);
        btndelete = new QPushButton(centralwidget);
        btndelete->setObjectName("btndelete");
        btndelete->setGeometry(QRect(130, 100, 51, 16));
        btndelete->setFont(font1);
        btnclear = new QPushButton(centralwidget);
        btnclear->setObjectName("btnclear");
        btnclear->setGeometry(QRect(180, 100, 51, 16));
        btnclear->setFont(font1);
        txtProductName = new QLineEdit(centralwidget);
        txtProductName->setObjectName("txtProductName");
        txtProductName->setGeometry(QRect(190, 20, 113, 16));
        txtPrice = new QLineEdit(centralwidget);
        txtPrice->setObjectName("txtPrice");
        txtPrice->setGeometry(QRect(190, 40, 113, 16));
        txtQuantity = new QLineEdit(centralwidget);
        txtQuantity->setObjectName("txtQuantity");
        txtQuantity->setGeometry(QRect(190, 60, 113, 16));
        txtCategory = new QLineEdit(centralwidget);
        txtCategory->setObjectName("txtCategory");
        txtCategory->setGeometry(QRect(190, 80, 113, 16));
        labelProduct = new QLabel(centralwidget);
        labelProduct->setObjectName("labelProduct");
        labelProduct->setGeometry(QRect(100, 20, 71, 16));
        labelProduct->setFont(font1);
        labelprice = new QLabel(centralwidget);
        labelprice->setObjectName("labelprice");
        labelprice->setGeometry(QRect(100, 40, 41, 16));
        labelprice->setFont(font1);
        labelquantity = new QLabel(centralwidget);
        labelquantity->setObjectName("labelquantity");
        labelquantity->setGeometry(QRect(100, 60, 41, 16));
        labelquantity->setFont(font1);
        labelcategory = new QLabel(centralwidget);
        labelcategory->setObjectName("labelcategory");
        labelcategory->setGeometry(QRect(100, 80, 51, 16));
        labelcategory->setFont(font1);
        tableProducts = new QTableWidget(centralwidget);
        if (tableProducts->columnCount() < 5)
            tableProducts->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableProducts->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableProducts->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableProducts->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableProducts->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableProducts->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableProducts->setObjectName("tableProducts");
        tableProducts->setGeometry(QRect(0, 120, 421, 91));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(true);
        tableProducts->setFont(font2);
        txtsearch = new QLineEdit(centralwidget);
        txtsearch->setObjectName("txtsearch");
        txtsearch->setGeometry(QRect(350, 100, 51, 16));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 100, 81, 20));
        label->setFont(font1);
        btnBack = new QPushButton(centralwidget);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(320, 210, 80, 16));
        btnBack->setFont(font1);
        ProductManagement->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ProductManagement);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        ProductManagement->setMenuBar(menubar);
        statusbar = new QStatusBar(ProductManagement);
        statusbar->setObjectName("statusbar");
        ProductManagement->setStatusBar(statusbar);

        retranslateUi(ProductManagement);

        QMetaObject::connectSlotsByName(ProductManagement);
    } // setupUi

    void retranslateUi(QMainWindow *ProductManagement)
    {
        ProductManagement->setWindowTitle(QCoreApplication::translate("ProductManagement", "MainWindow", nullptr));
        lineEdit->setText(QCoreApplication::translate("ProductManagement", "                    PRODUCT MANAGEMENT", nullptr));
        btnadd->setText(QCoreApplication::translate("ProductManagement", "    Add Button    ", nullptr));
        btnupdate->setText(QCoreApplication::translate("ProductManagement", "Update", nullptr));
        btndelete->setText(QCoreApplication::translate("ProductManagement", "Delete", nullptr));
        btnclear->setText(QCoreApplication::translate("ProductManagement", "Clear", nullptr));
        labelProduct->setText(QCoreApplication::translate("ProductManagement", "Product Name", nullptr));
        labelprice->setText(QCoreApplication::translate("ProductManagement", "Price", nullptr));
        labelquantity->setText(QCoreApplication::translate("ProductManagement", "Quantity", nullptr));
        labelcategory->setText(QCoreApplication::translate("ProductManagement", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableProducts->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ProductManagement", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableProducts->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ProductManagement", "Product Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableProducts->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ProductManagement", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableProducts->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ProductManagement", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableProducts->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ProductManagement", "Category", nullptr));
        txtsearch->setText(QString());
        label->setText(QCoreApplication::translate("ProductManagement", "   Search product....", nullptr));
        btnBack->setText(QCoreApplication::translate("ProductManagement", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductManagement: public Ui_ProductManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTMANAGEMENT_H
