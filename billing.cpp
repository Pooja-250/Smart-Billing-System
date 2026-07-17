#include "billing.h"
#include "ui_billing.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QMessageBox>
#include <QDate>
#include "dashboard.h"
#include <QRegularExpression>



Billing::Billing(QWidget *parent)
    : QMainWindow(parent)
      ,ui(new Ui::Billing)
{
    ui->setupUi(this);
    // ui->cmbProduct->addItem("Select Product");
    // ui->cmbProduct->addItem("Milk");
    // ui->cmbProduct->addItem("Chips");
    // ui->cmbProduct->addItem("KitKat");
    // ui->cmbProduct->addItem("Bread");
    // ui->cmbProduct->addItem("Cold Drink");


        loadProducts();
    }

void Billing::loadProducts()
{
    ui->cmbProduct->clear();

    QSqlQuery query;
    query.prepare("SELECT name FROM products");

    if(query.exec())
    {
        ui->cmbProduct->addItem("Select Product");

        while(query.next())
        {
            ui->cmbProduct->addItem(query.value(0).toString());
        }
    }
}

Billing::~Billing()
{
    delete ui;
}


    void Billing::on_cmbProduct_currentTextChanged(const QString &arg1)
    {
        if(arg1 == "Select Product")
        {
            ui->txtPrice->clear();
            return;
        }

        QSqlQuery query;
        query.prepare("SELECT price FROM products WHERE name = ?");
        query.addBindValue(arg1);

        if(query.exec())
        {
            if(query.next())
            {
                ui->txtPrice->setText(query.value(0).toString());
            }
        }
        else
        {
            qDebug() << query.lastError().text();
        }
    }




        void Billing::on_btnAddToBill_clicked()
    {

            qDebug() << "Button Clicked";
            qDebug() << "Customer =" << ui->txtCustomer->text();

            QString customer = ui->txtCustomer->text().trimmed();

            if(customer.isEmpty())
            {
                QMessageBox::warning(this, "Error", "Please enter customer name.");
                return;
            }

            QRegularExpression nameRegex("^[A-Za-z ]+$");

            if(!nameRegex.match(customer).hasMatch())
            {
                QMessageBox::warning(this,
                                     "Error",
                                     "Please enter a valid customer name.");
                return;
            }



            QString mobile = ui->txtMobile->text().trimmed();

            QRegularExpression mobileRegex("^[0-9]{10}$");

            if(!mobileRegex.match(mobile).hasMatch())
            {
                QMessageBox::warning(this,
                                     "Error",
                                     "Please enter a valid 10-digit mobile number.");
                return;
            }


            if(ui->cmbProduct->currentText() == "Select Product")
            {
                QMessageBox::warning(this,
                                     "Error",
                                     "Please select a product.");
                return;
            }



            if(ui->txtQunatity->text().trimmed().isEmpty() || ui->txtQunatity->text().toInt() <= 0)
            {
                QMessageBox::warning(this, "Error", "Please enter a valid quantity.");
                return;
            }




            int row = ui->tableWidget->rowCount();
            ui->tableWidget->insertRow(row);

            QString product = ui->cmbProduct->currentText();
            int price = ui->txtPrice->text().toInt();
            int quantity = ui->txtQunatity->text().toInt();
            int total = price * quantity;

            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(product));
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(price)));
            ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(quantity)));
            ui->tableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(total)));

            GrandTotal += total;
            ui->lblGrandTotal->setText("GrandTotal : ₹" + QString::number(GrandTotal));
        }



        void Billing::on_btnRemoveItem_clicked()
        {
                int row = ui->tableWidget->currentRow();

                if(row == -1)
                {
                    QMessageBox::warning(this, "Error", "Please select an item to remove.");
                    return;
                }

                int total = ui->tableWidget->item(row, 3)->text().toInt();

                GrandTotal -= total;
                ui->lblGrandTotal->setText("Grand Total : ₹" + QString::number(GrandTotal));

                ui->tableWidget->removeRow(row);
            }



            void Billing::on_btnClearBill_clicked()
            {

                    ui->tableWidget->setRowCount(0);

                    GrandTotal = 0;
                    ui->lblGrandTotal->setText("Grand Total : ₹0");

                    ui->cmbProduct->setCurrentIndex(0);
                    ui->txtCustomer->clear();
                    ui->txtMobile->clear();
                    ui->txtPrice->clear();
                    ui->txtQunatity->clear();
                }



                void Billing::on_btnGenBill_clicked()
                {

                    if(ui->txtCustomer->text().trimmed().isEmpty())
                    {
                        QMessageBox::warning(this,
                                             "Error",
                                             "Please enter customer name.");
                        return;
                    }

                    if(ui->txtMobile->text().trimmed().isEmpty())
                    {
                        QMessageBox::warning(this,
                                             "Error",
                                             "Please enter mobile number.");
                        return;
                    }

                    if(ui->tableWidget->rowCount() == 0)
                        {
                            QMessageBox::warning(this, "Error", "Please add products to the bill.");
                            return;
                        }

                        QSqlQuery query;

                        query.prepare("INSERT INTO bills(customer_name, mobile, grand_total, bill_date) "
                                      "VALUES(?, ?, ?, ?)");

                        query.addBindValue(ui->txtCustomer->text().trimmed());
                        query.addBindValue(ui->txtMobile->text());
                        query.addBindValue(GrandTotal);
                        query.addBindValue(QDate::currentDate().toString("dd-MM-yyyy"));

                        if(query.exec())
                        {
                            qDebug() << "Bill Saved Successfully";
                            QMessageBox::information(this,
                                                     "Success",
                                                     "Bill Generated Successfully!");
                        }
                        else
                        {
                             qDebug() << query.lastError().text();
                            QMessageBox::critical(this,
                                                  "Database Error",
                                                  query.lastError().text());
                        }
                    }





                        void Billing::on_btnBack_clicked()
                        {
                            Dashboard *dashboard = new Dashboard();
                            dashboard->show();
                            this->close();
                        }


