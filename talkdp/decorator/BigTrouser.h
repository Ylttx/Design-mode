#ifndef BIG_TROUSER_H
#define BIG_TROUSER_H

#include "Finery.h"

class BigTrouser : public Finery {
public:
    BigTrouser(Person *component) : Finery(component) {}

    virtual void show() {
        cout << "垮裤 ";
        Finery::show();
    }

};

#endif