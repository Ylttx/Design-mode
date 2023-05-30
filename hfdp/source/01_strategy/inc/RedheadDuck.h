#ifndef REDHEAD_DUCK_H
#define REDHEAD_DUCK_H
#include "Duck.h"

class RedheadDuck : public Duck
{
public:
    void display() override {
        cout << "看起来像红头鸭" << endl;
    }
};

#endif // REDHEAD_DUCK_H