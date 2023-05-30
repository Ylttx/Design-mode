#ifndef FLY_WITH_WINGS_H
#define FLY_WITH_WINGS_H
#include "FlyBehavior.h"

class FlyWithWings : public FlyBehavior
{
public:
    void fly() override {
        cout << "I am flying" << endl;
    }
};

#endif // FLY_WITH_WINGS_H