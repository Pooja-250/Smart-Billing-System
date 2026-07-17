#include "mainwindow.h"
#include "databasemanager.h"

#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Database Connection
    if(!Database::connectDatabase())
    {
        QMessageBox::critical(nullptr,
                              "Database Error",
                              "Unable to connect to database!");
        return -1;
    }

    MainWindow w;
    w.show();

    return a.exec();
}