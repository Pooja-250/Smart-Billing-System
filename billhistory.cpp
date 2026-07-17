#include "billhistory.h"
#include "ui_billhistory.h"
#include <QSqlQuery>
#include <QTableWidgetItem>

BillHistory::BillHistory(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BillHistory)
{
    ui->setupUi(this);

    loadBills();
}

BillHistory::~BillHistory()
{
    delete ui;
}

void BillHistory::loadBills()
{
    ui->tableBillHistory->setRowCount(0);

    QSqlQuery query("SELECT * FROM bills");

    while(query.next())
    {
        int row = ui->tableBillHistory->rowCount();
        ui->tableBillHistory->insertRow(row);

        ui->tableBillHistory->setItem(row,0,new QTableWidgetItem(query.value(0).toString()));
        ui->tableBillHistory->setItem(row,1,new QTableWidgetItem(query.value(1).toString()));
        ui->tableBillHistory->setItem(row,2,new QTableWidgetItem(query.value(2).toString()));
        ui->tableBillHistory->setItem(row,3,new QTableWidgetItem(query.value(3).toString()));
        ui->tableBillHistory->setItem(row,4,new QTableWidgetItem(query.value(4).toString()));
    }
}