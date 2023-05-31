#ifndef CONCRETE_STATE_B_H
#define CONCRETE_STATE_B_H

#include "State.h"
#include "Context.h"
#include <iostream>

class ConcreteStateB : public State {
public:
    ConcreteStateB() {}
    ~ConcreteStateB() {}

    void Handle(Context *context) override {
        std::cout << "I am ConcreteStateB...\n";
        std::cout << "I am Handle context(" << context << ")...\n";
    }
};


#endif