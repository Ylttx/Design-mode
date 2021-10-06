#ifndef CONTEXT_H
#define CONTEXT_H

#include "State.h"

class Context {
public:
    Context(State *s) : current(s) {}
    ~Context() {}

    void Request() {
        if (current) {
            current->Handle(this);
        }
    }

    void ChangeState(State *s) {
        current = s; 
    }

private:
    State *current;
};

#endif