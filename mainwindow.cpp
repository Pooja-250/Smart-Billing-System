#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dashboard.h"

#include <QMessageBox>
#include <QSqlQuery>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnLogin_clicked()
{
    QString username = ui->txtUsername->text();
    QString password = ui->txtPassword->text();

    QSqlQuery query;
    query.prepare("SELECT * FROM users WHERE username = ? AND password = ?");
    query.addBindValue(username);
    query.addBindValue(password);

    if(query.exec() && query.next())
    {
        Dashboard *dashboard = new Dashboard();
        dashboard->show();

        this->hide();
    }
    else
    {
        QMessageBox::warning(this,
                             "Login Failed",
                             "Invalid Username or Password");
    }
}