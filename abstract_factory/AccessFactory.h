#ifndef ACCESS_FACTORY_H
#define ACCESS_FACTORY_H

#include "IFactory.h"
#include "AccessUser.h"
#include "AccessDepartment.h"

class AccessFactory : public IFactory {
public:

    IUser* CreateUser() override {
        return new AccessUser();
    }

    IDepartment* CreateDepartment() override {
        return new AccessDepartment();
    }
};

#endif