#-------------------------------------------------
#
# Project created by QtCreator 2014-02-24T22:02:48
#
#-------------------------------------------------

QT       += declarative core gui opengl

TARGET = QMLTest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app
target.path=/usr/local/bin
INSTALLS=target


SOURCES += src/main.cpp \
    src/Handler.cpp

OTHER_FILES += qml/MainScreen.qml

HEADERS += hdr/Handler.h
