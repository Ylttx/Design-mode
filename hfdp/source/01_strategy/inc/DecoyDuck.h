#ifndef DECOY_DUCK_H
#define DECOY_DUCK_H
#include "Duck.h"

class DecoyDuck : public Duck
{
public:
    void display() override {
        cout << "看起来像诱饵鸭" << endl;
    }
};

#endif // DECOY_DUCK_H