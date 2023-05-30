#ifndef FLY_BEHAVIOR_H
#define FLY_BEHAVIOR_H
#include <iostream>
using namespace std;

class FlyBehavior {
public:
    virtual ~FlyBehavior() {}

    virtual void fly() = 0;
};

#endif // FLY_BEHAVIOR_H