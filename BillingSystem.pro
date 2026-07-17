QT += core gui widgets sql printsupport

CONFIG += c++17

TARGET = SmartBillingSystem
TEMPLATE = app

SOURCES += \
    billing.cpp \
    dashboard.cpp \
    databasemanager.cpp \
    dialog.cpp \
    main.cpp \
    mainwindow.cpp \
    productmanagement.cpp\
    salesreport.cpp

HEADERS += \
    billing.h \
    dashboard.h \
    databasemanager.h \
    dialog.h \
    mainwindow.h \
    productmanagement.h\
    salesreport.h

FORMS += \
    billing.ui \
    dashboard.ui \
    dialog.ui \
    mainwindow.ui \
    productmanagement.ui\
    salesreport.ui

# Deployment
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target