#include <QtCore>
#include <QtTest>
#include "../src/myclass.h"
#include "../src/mysecondclass.h"

class test_MyClass : public QObject {
    Q_OBJECT
private slots:
    void test_myInt();
    void test_mySecondClass();
};

void test_MyClass::test_myInt() {
    MyClass myClass;
    QCOMPARE(myClass.myInt(), 0);
}

void test_MyClass::test_mySecondClass() {
    MySecondClass mySecondClass(5);
    QCOMPARE(mySecondClass.getValue(), 5);

    mySecondClass.setValue(10);
    QCOMPARE(mySecondClass.getValue(), 10);
}

QTEST_GUILESS_MAIN(test_MyClass)
#include "test_myclass.moc"
