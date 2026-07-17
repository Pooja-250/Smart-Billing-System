#ifndef BILLHISTORY_H
#define BILLHISTORY_H

#include <QMainWindow>

namespace Ui {
class BillHistory;
}

class BillHistory : public QMainWindow
{
    Q_OBJECT

public:
    explicit BillHistory(QWidget *parent = nullptr);
    ~BillHistory();



private:
    Ui::BillHistory *ui;

    void loadBills();
};

#endif // BILLHISTORY_H
