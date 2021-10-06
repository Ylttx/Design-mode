#ifndef STATE_H
#define STATE_H

class Context;

class State {
public:
    virtual ~State() {}
    virtual void Handle(Context *context) = 0;
};

#endif