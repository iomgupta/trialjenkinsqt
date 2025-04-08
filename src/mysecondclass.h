#ifndef MYSECONDCLASS_H
#define MYSECONDCLASS_H

class MySecondClass {
public:
    MySecondClass(int val) : value(val) {}

    int getValue() const {
        return value;
    }

    void setValue(int val) {
        value = val;
    }

private:
    int value;
};

#endif // MYSECONDCLASS_H
