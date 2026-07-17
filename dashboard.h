#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>

namespace Ui {
class Dashboard;
}

class Dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();

private slots:
    void on_btnProducts_clicked();
    void on_btnBilling_clicked();
    void on_btnBillHistory_clicked();

    void on_btnLogout_clicked();

    void on_btnReports_clicked();

private:
    Ui::Dashboard *ui;
};

#endif // DASHBOARD_H
