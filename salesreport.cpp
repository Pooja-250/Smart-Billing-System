#include "salesreport.h"
#include "ui_salesreport.h"
#include "salesreport.h"
#include "ui_salesreport.h"
#include "dashboard.h"

#include <QSqlQuery>
#include <QTableWidgetItem>
#include <QDate>

SalesReport::SalesReport(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SalesReport)
{
    ui->setupUi(this);
    loadReport();
}

SalesReport::~SalesReport()
{
    delete ui;
}
void SalesReport::loadReport()
{
    ui->tableSales->setRowCount(0);

    // Total Bills
    QSqlQuery query;
    query.exec("SELECT COUNT(*) FROM bills");

    if(query.next())
    {
        ui->lblBillsValue->setText(query.value(0).toString());
    }

    // Total Sales
    query.exec("SELECT SUM(grand_total) FROM bills");

    if(query.next())
    {
        ui->lblSalesValue->setText(query.value(0).toString());
    }

    // Today's Sales
    query.prepare("SELECT SUM(grand_total) FROM bills WHERE bill_date=?");
    query.addBindValue(QDate::currentDate().toString("dd-MM-yyyy"));
    query.exec();

    if(query.next())
    {
        ui->lblTodayValue->setText(query.value(0).toString());
    }

    // Load Bills
    query.exec("SELECT * FROM bills");

    while(query.next())
    {
        int row = ui->tableSales->rowCount();
        ui->tableSales->insertRow(row);

        ui->tableSales->setItem(row,0,new QTableWidgetItem(query.value(0).toString()));
        ui->tableSales->setItem(row,1,new QTableWidgetItem(query.value(1).toString()));
        ui->tableSales->setItem(row,2,new QTableWidgetItem(query.value(2).toString()));
        ui->tableSales->setItem(row,3,new QTableWidgetItem(query.value(3).toString()));
        ui->tableSales->setItem(row,4,new QTableWidgetItem(query.value(4).toString()));
    }
}


    void SalesReport::on_btnBack_clicked()
    {
        Dashboard *dashboard = new Dashboard();
        dashboard->show();
        this->close();
    }


