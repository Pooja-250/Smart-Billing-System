#include "dashboard.h"
#include "ui_dashboard.h"
#include "productmanagement.h"
#include "billing.h"
#include "mainwindow.h"
#include <QMessageBox>
#include "salesreport.h"
Dashboard::Dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dashboard)
{
    ui->setupUi(this);
}

Dashboard::~Dashboard()
{
    delete ui;
}

void Dashboard::on_btnProducts_clicked()
{

    ProductManagement *product = new ProductManagement();
    product->show();

    this->hide();
}
void Dashboard::on_btnBilling_clicked()
{
    Billing *bill = new Billing();
    bill->show();

    this->hide();
}





void Dashboard::on_btnLogout_clicked()
{
      QMessageBox::StandardButton reply;

        reply = QMessageBox::question(this,
                                      "Logout",
                                      "Are you sure you want to logout?",
                                      QMessageBox::Yes | QMessageBox::No);

        if(reply == QMessageBox::Yes)
        {
            MainWindow *login = new MainWindow();
            login->show();

            this->close();
        }
    }



    void Dashboard::on_btnReports_clicked()
    {

            SalesReport *report = new SalesReport();
            report->show();

            this->hide();
        }


