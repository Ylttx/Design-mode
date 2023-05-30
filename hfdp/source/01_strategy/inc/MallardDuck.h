#ifndef MALLARD_DUCK_H
#define MALLARD_DUCK_H
#include "Duck.h"

class MallardDuck : public Duck
{
public:
    void display() override {
        cout << "看起来像绿头鸭" << endl;
    }
};

#endif // MALLARD_DUCK_H