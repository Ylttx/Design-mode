#ifndef UNDERGRADUATE_FACTORY_H
#define UNDERGRADUATE_FACTORY_H

#include "IFactory.h"
#include "Undergraduate.h"

class UndergraduateFactory : public IFactory {
public:
    virtual LeiFeng* CreateLeiFeng() {
        return new Undergraduate();
    }
};

#endif