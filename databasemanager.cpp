#include "databasemanager.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QDir>


bool Database::connectDatabase()
{
    // SQLite database create/open
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("BillingSystem.db");
    qDebug() << db.databaseName();

    qDebug() << QDir::currentPath();

    if (!db.open())
    {
        qDebug() << "Database Error:" << db.lastError().text();
        return false;
    }

    qDebug() << "Database Connected Successfully";

    QSqlQuery query;

    // Users Table
    query.exec(
        "CREATE TABLE IF NOT EXISTS users ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT,"
        "username TEXT UNIQUE,"
        "password TEXT)"
        );

    // Default Admin Login
    query.exec(
        "INSERT OR IGNORE INTO users(username,password) "
        "VALUES('admin','1234')"
        );

    // Products Table
    query.exec(
        "CREATE TABLE IF NOT EXISTS products ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT,"
        "name TEXT,"
        "price REAL,"
        "quantity INTEGER,"
        "category TEXT)"
        );
    query.exec("CREATE TABLE IF NOT EXISTS bills ("
               "bill_id INTEGER PRIMARY KEY AUTOINCREMENT,"
               "customer_name TEXT,"
               "mobile TEXT,"
               "grand_total REAL,"
               "bill_date TEXT)");

    return true;
}