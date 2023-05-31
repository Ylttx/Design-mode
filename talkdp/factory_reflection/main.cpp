#include "DataAccess.h"
#include <iostream>

int main() {
    User user;
    Department dept;

    IUser *iu = DataAccess::CreateUser();
    iu->Insert(user);
    iu->GetUser(2);
    delete iu;

    IDepartment *id = DataAccess::CreateDepartment();
    id->Insert(dept);
    id->GetDepartment(1);
    delete id;

    return 0;
}