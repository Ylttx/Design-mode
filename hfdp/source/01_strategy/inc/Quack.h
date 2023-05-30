#ifndef QUACK_H
#define QUACK_H
#include "QuackBehavior.h"

class Quack : public QuackBehavior
{
public:
    void quack() override {
        cout << "嘎嘎叫" << endl;
    }
};

#endif // QUACK_H