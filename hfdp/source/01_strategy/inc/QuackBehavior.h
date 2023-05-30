#ifndef QUACK_BEHAVIOR_H
#define QUACK_BEHAVIOR_H
#include <iostream>
using namespace std;


class QuackBehavior
{
public:
    virtual ~QuackBehavior() {}

    virtual void quack() = 0;
};

#endif // QUACK_BEHAVIOR_H