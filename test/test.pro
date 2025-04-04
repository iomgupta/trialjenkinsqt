TEMPLATE = app
TARGET = test
INCLUDEPATH += .

QT += core testlib
CONFIG += testcase

HEADERS += ../src/myclass.h
SOURCES += test_myclass.cpp
