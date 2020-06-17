#-------------------------------------------------
#
# Project created by QtCreator 2019-12-03T18:18:21
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ESP8266CTRL
TEMPLATE = app


SOURCES += main.cpp\
        esp8266ctrl.cpp

HEADERS  += esp8266ctrl.h

FORMS    += esp8266ctrl.ui

RESOURCES += \
    resource.qrc
