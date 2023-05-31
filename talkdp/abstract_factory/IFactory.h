#ifndef IFACTORY_H
#define IFACTORY_H

#include "IUser.h"
#include "IDepartment.h"

class IFactory {
public:
    virtual ~IFactory() {}

    virtual IUser* CreateUser() = 0;
    virtual IDepartment* CreateDepartment() = 0;
};

#endif