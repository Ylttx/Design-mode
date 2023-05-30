#ifndef RUBBER_DUCK_H
#define RUBBER_DUCK_H
#include "Duck.h"

class RubberDuck : public Duck
{
public:
    void display() override {
        cout << "看起来像橡皮鸭" << endl;
    }
};

#endif // RUBBER_DUCK_H