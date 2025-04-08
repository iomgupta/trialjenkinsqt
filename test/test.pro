TEMPLATE = app
TARGET = test
INCLUDEPATH += .

QT += core testlib
CONFIG += testcase

HEADERS += ../src/myclass.h ../src/mysecondclass.h
SOURCES += test_myclass.cpp
