#include "SqlserverFactory.h"
#include "AccessFactory.h"
#include <iostream>

int main() {
    User user;
    Department dept;

    IFactory *factory = new AccessFactory;
    // IFactory *factory = new SqlServerFactory;

    IUser *iu = factory->CreateUser();
    iu->Insert(user);
    iu->GetUser(2);
    delete iu;

    IDepartment *id = factory->CreateDepartment();
    id->Insert(dept);
    id->GetDepartment(1);
    delete id;

    delete factory;

    return 0;
}