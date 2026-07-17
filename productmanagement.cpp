#include "productmanagement.h"
#include "ui_productmanagement.h"
#include "dashboard.h"

#include <QSqlQuery>
#include <QMessageBox>
#include <QTableWidgetItem>
#include <QSqlQuery>

ProductManagement::ProductManagement(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ProductManagement)
{
    ui->setupUi(this);

    loadProducts();
}

ProductManagement::~ProductManagement()
{
    delete ui;
}

void ProductManagement::on_btnadd_clicked()
{
    QString productName = ui->txtProductName->text();
    QString price = ui->txtPrice->text();
    QString quantity = ui->txtQuantity->text();
    QString category = ui->txtCategory->text();

    if(productName.isEmpty() || price.isEmpty() ||
        quantity.isEmpty() || category.isEmpty())
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please fill all fields.");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO products(name,price,quantity,category)"
                  "VALUES(?,?,?,?)");

    query.addBindValue(productName);
    query.addBindValue(price);
    query.addBindValue(quantity);
    query.addBindValue(category);

    if(query.exec())
    {
        QMessageBox::information(this,
                                 "Success",
                                 "Product Added Successfully.");

        ui->txtProductName->clear();
        ui->txtPrice->clear();
        ui->txtQuantity->clear();
        ui->txtCategory->clear();

        loadProducts();
    }
    else
    {
        QMessageBox::critical(this,
                              "Error",
                              "Product could not be added.");
    }
}

void ProductManagement::loadProducts()
{
    ui->tableProducts->clearContents();
    ui->tableProducts->setRowCount(0);

    QSqlQuery query;
    query.exec("SELECT * FROM products");

    while(query.next())
    {
        qDebug() << query.value(0).toString()
        << query.value(1).toString();

        int row = ui->tableProducts->rowCount();
        ui->tableProducts->insertRow(row);

        ui->tableProducts->setItem(row,0,new QTableWidgetItem(query.value(0).toString()));
        ui->tableProducts->setItem(row,1,new QTableWidgetItem(query.value(1).toString()));
        ui->tableProducts->setItem(row,2,new QTableWidgetItem(query.value(2).toString()));
        ui->tableProducts->setItem(row,3,new QTableWidgetItem(query.value(3).toString()));
        ui->tableProducts->setItem(row,4,new QTableWidgetItem(query.value(4).toString()));
    }
}

void ProductManagement::on_tableProducts_cellClicked(int row, int column)
{
    Q_UNUSED(column);

    selectedProductId = ui->tableProducts->item(row,0)->text().toInt();

    ui->txtProductName->setText(ui->tableProducts->item(row,1)->text());
    ui->txtPrice->setText(ui->tableProducts->item(row,2)->text());
    ui->txtQuantity->setText(ui->tableProducts->item(row,3)->text());
    ui->txtCategory->setText(ui->tableProducts->item(row,4)->text());
}



    void ProductManagement::on_btndelete_clicked()
    {
        if(selectedProductId == -1)
        {
            QMessageBox::warning(this,
                                 "Delete",
                                 "Please select a product.");
            return;
        }

        QSqlQuery query;
        query.prepare("DELETE FROM products WHERE id=?");
        query.addBindValue(selectedProductId);

        if(query.exec())
        {
            QMessageBox::information(this,
                                     "Success",
                                     "Product Deleted Successfully.");

            loadProducts();

            selectedProductId = -1;

            ui->txtProductName->clear();
            ui->txtPrice->clear();
            ui->txtQuantity->clear();
            ui->txtCategory->clear();
        }
        else
        {
            QMessageBox::critical(this,
                                  "Error",
                                  "Unable to delete product.");
        }
    }



    void ProductManagement::on_btnupdate_clicked()
    {
        if(selectedProductId == -1)
        {
            QMessageBox::warning(this,
                                 "Update",
                                 "Please select a product.");
            return;
        }

        QString productName = ui->txtProductName->text();
        QString price = ui->txtPrice->text();
        QString quantity = ui->txtQuantity->text();
        QString category = ui->txtCategory->text();

        if(productName.isEmpty() || price.isEmpty() ||
            quantity.isEmpty() || category.isEmpty())
        {
            QMessageBox::warning(this,
                                 "Error",
                                 "Please fill all fields.");
            return;
        }

        QSqlQuery query;
        query.prepare("UPDATE products SET name=?, price=?, quantity=?, category=? WHERE id=?");

        query.addBindValue(productName);
        query.addBindValue(price);
        query.addBindValue(quantity);
        query.addBindValue(category);
        query.addBindValue(selectedProductId);

        if(query.exec())
        {
            QMessageBox::information(this,
                                     "Success",
                                     "Product Updated Successfully.");

            loadProducts();

            ui->txtProductName->clear();
            ui->txtPrice->clear();
            ui->txtQuantity->clear();
            ui->txtCategory->clear();

            selectedProductId = -1;
        }
        else
        {
            QMessageBox::critical(this,
                                  "Error",
                                  "Product could not be updated.");
        }
    }

    void ProductManagement::on_txtsearch_textChanged(const QString &arg1)
    {
        ui->tableProducts->setRowCount(0);
        QSqlQuery query;

        query.prepare("SELECT * FROM products WHERE name LIKE ?");
        query.addBindValue("%" + arg1 + "%");

        if(query.exec())
        {
            int row = 0;

            while(query.next())
            {
                ui->tableProducts->insertRow(row);

                ui->tableProducts->setItem(row,0,new QTableWidgetItem(query.value(0).toString()));
                ui->tableProducts->setItem(row,1,new QTableWidgetItem(query.value(1).toString()));
                ui->tableProducts->setItem(row,2,new QTableWidgetItem(query.value(2).toString()));
                ui->tableProducts->setItem(row,3,new QTableWidgetItem(query.value(3).toString()));
                ui->tableProducts->setItem(row,4,new QTableWidgetItem(query.value(4).toString()));

                row++;
            }
        }
    }

    void ProductManagement::on_btnBack_clicked()
    {

            Dashboard *dashboard = new Dashboard();
            dashboard->show();
            this->close();
        }


