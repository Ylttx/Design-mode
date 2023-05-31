#ifndef FINERY_H
#define FINERY_H

#include "Person.h"

class Finery : public Person {
public:
    Finery(Person *component) : component(component) {}

    virtual void show() {
        component->show();
    }

protected:
    Person *component;
};

#endif