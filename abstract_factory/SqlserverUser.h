#ifndef SQLSERVER_USER_H
#define SQLSERVER_USER_H

#include "IUser.h"
#include <iostream>

class SqlserverUser : public IUser {
public:
    void Insert(const User &user) override {
        std::cout << "在SQL Server中给User表增加一条记录" << std::endl;
    } 

    User* GetUser(int id) override {
        std::cout << "在SQL Server中根据ID得到User表一条记录" << std::endl;
        User *user = new User;
        return user;
    }
};

#endif