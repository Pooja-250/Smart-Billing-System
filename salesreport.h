#ifndef SALESREPORT_H
#define SALESREPORT_H

#include <QMainWindow>

namespace Ui {
class SalesReport;
}

class SalesReport : public QMainWindow
{
    Q_OBJECT

public:
    explicit SalesReport(QWidget *parent = nullptr);
    ~SalesReport();
void loadReport();
private slots:
    void on_btnBack_clicked();

private:
    Ui::SalesReport *ui;
};

#endif // SALESREPORT_H
