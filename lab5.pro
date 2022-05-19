QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    absreader.cpp \
    csvreader.cpp \
    csvwriter.cpp \
    jsonreader.cpp \
    les.cpp \
    main.cpp \
    mainwindow.cpp \
    mybrowser.cpp \
    online.cpp \
    open.cpp \
    usual.cpp


HEADERS += \
    absreader.h \
    csvreader.h \
    csvwriter.h \
    jsonreader.h \
    les.h \
    mainwindow.h \
    mybrowser.h \
    online.h \
    open.h \
    usual.h


FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
