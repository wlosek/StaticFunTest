QT += core
QT -= gui

TARGET = StaticFunTest
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    first.cpp \
    second.cpp

HEADERS += \
    first.h \
    second.h

