#ifndef SQUEAK_H
#define SQUEAK_H
#include "QuackBehavior.h"

class Squeak : public QuackBehavior
{
public:
    void quack() override {
        cout << "叽叽叫" << endl;
    }
};

#endif // SQUEAK_H