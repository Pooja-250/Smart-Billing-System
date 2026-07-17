#ifndef BILLING_H
#define BILLING_H

#include <QMainWindow>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class Billing;
}

class Billing : public QMainWindow
{
    Q_OBJECT

public:
    explicit Billing(QWidget *parent = nullptr);
    ~Billing();

private slots:
    void on_cmbProduct_currentTextChanged(const QString &arg1);

    void on_btnAddToBill_clicked();
    void on_btnRemove_clicked();
    void on_btnRemoveItem_clicked();

    void on_btnClearBill_clicked();

    void on_btnGenBill_clicked();

    void on_btnBack_clicked();

private:
    Ui::Billing *ui;
    int GrandTotal = 0;
    void loadProducts();
};

#endif // BILLING_H