TEMPLATE = app
TARGET = trying_qt.pro
QT       += core gui
QT     += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    accueilwindow.cpp \
    addbook.cpp \
    booksinterface.cpp \
    creeCompte.cpp \
    main.cpp \
    mainwindow.cpp \
    motDePasse.cpp

HEADERS += \
    accueilwindow.h \
    addbook.h \
    booksinterface.h \
    creeCompte.h \
    mainwindow.h \
    motDePasse.h

FORMS += \
    accueilwindow.ui \
    addbook.ui \
    booksinterface.ui \
    creeCompte.ui \
    mainwindow.ui \
    motDePasse.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc


win32: LIBS += -L$$PWD/../../../../../Qt/6.8.0/Src/qtbase/src/plugins/sqldrivers/mysql/ llibmysql

INCLUDEPATH += $$PWD/''
DEPENDPATH += $$PWD/''
