TEMPLATE = app
TARGET = trying_qt.pro
QT       += core gui sql printsupport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    accueilwindow.cpp \
    addbook.cpp \
    booksinterface.cpp \
    commentaire.cpp \
    creeCompte.cpp \
    main.cpp \
    mainwindow.cpp \
    motDePasse.cpp

HEADERS += \
    accueilwindow.h \
    addbook.h \
    booksinterface.h \
    commentaire.h \
    creeCompte.h \
    mainwindow.h \
    motDePasse.h

FORMS += \
    accueilwindow.ui \
    addbook.ui \
    booksinterface.ui \
    commentaire.ui \
    creeCompte.ui \
    mainwindow.ui \
    motDePasse.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc





win32: LIBS += -L$$PWD/'../../../../../Program Files/MySQL/MySQL Connector C 6.1/lib/' -llibmysql

INCLUDEPATH += $$PWD/'../../../../../Program Files/MySQL/MySQL Connector C 6.1/include'
DEPENDPATH += $$PWD/'../../../../../Program Files/MySQL/MySQL Connector C 6.1/include'
