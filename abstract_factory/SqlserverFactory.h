#ifndef SQLSERVER_FACTORY_H
#define SQLSERVER_FACTORY_H

#include "IFactory.h"
#include "SqlserverUser.h"
#include "SqlserverDepartment.h"

class SqlServerFactory : public IFactory {
public:

    IUser* CreateUser() override {
        return new SqlserverUser();
    }

    IDepartment* CreateDepartment() override {
        return new SqlserverDepartment();
    }
};

#endif