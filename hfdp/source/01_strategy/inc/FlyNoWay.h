#ifndef FLY_NO_WAY_H
#define FLY_NO_WAY_H
#include "FlyBehavior.h"

class FlyNoWay : public FlyBehavior
{
public:
    void fly() override {
        cout << "Do nothing... Cause I can't fly." << endl;
    }

};



#endif // FLY_NO_WAY_H