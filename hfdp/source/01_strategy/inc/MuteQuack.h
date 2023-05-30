#ifndef MUTE_QUACK_H
#define MUTE_QUACK_H
#include "QuackBehavior.h"

class MuteQuack : public QuackBehavior
{
public:
    void quack() override {
        cout << "不会叫" << endl;
    }
};

#endif // MUTE_QUACK_H