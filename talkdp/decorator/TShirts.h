#ifndef TSHIRTS_H
#define TSHIRTS_H

#include "Finery.h"

class TShirts : public Finery {
public:
    TShirts(Person *component) : Finery(component) {}

    virtual void show() {
        cout << "大T恤 ";
        Finery::show();
    }

};

#endif