#ifndef PRODUCTMANAGEMENT_H
#define PRODUCTMANAGEMENT_H

#include <QMainWindow>

namespace Ui {
class ProductManagement;
}

class ProductManagement : public QMainWindow
{
    Q_OBJECT

public:
    explicit ProductManagement(QWidget *parent = nullptr);
    ~ProductManagement();

private slots:
    void on_btnadd_clicked();
    void on_btndelete_clicked();


    void on_tableProducts_cellClicked(int row, int column);



    void on_btnupdate_clicked();

    void on_txtsearch_textChanged(const QString &arg1);
    void on_btnBack_clicked();

private:
    void loadProducts();
    int selectedProductId = -1;


    Ui::ProductManagement *ui;
};

#endif // PRODUCTMANAGEMENT_H