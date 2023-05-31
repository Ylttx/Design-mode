#ifndef ROLESTATE_MEMENTO_H
#define ROLESTATE_MEMENTO_H

class RoleStateMemento {
public:
    RoleStateMemento(double vit, double atk, double def) :
        vit(vit), atk(atk), def(def) {}
    ~RoleStateMemento() {}

    double vit;
    double atk;
    double def;
};

#endif