#ifndef IFACTORY_H
#define IFACTORY_H

#include "LeiFeng.h"

class IFactory {
public:
    virtual ~IFactory() {}
    virtual LeiFeng* CreateLeiFeng() = 0;
};

#endif