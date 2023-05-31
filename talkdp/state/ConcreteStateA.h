#ifndef CONCRETE_STATE_A_H
#define CONCRETE_STATE_A_H

#include "State.h"
#include "Context.h"
#include <iostream>

class ConcreteStateA : public State {
public:
    ConcreteStateA() {}
    ~ConcreteStateA() {}

    void Handle(Context *context) override {
        std::cout << "I am ConcreteStateA...\n";
        std::cout << "I am Handle context(" << context << ")...\n";
    }
};


#endif