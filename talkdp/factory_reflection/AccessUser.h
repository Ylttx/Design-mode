#ifndef ACCESS_USER_H
#define ACCESS_USER_H

#include "IUser.h"
#include "Register.h"
#include <iostream>

class AccessUser : public IUser {
public:
    void Insert(const User &user) override {
        std::cout << "在Access中给User表增加一条记录" << std::endl;
    } 

    User* GetUser(int id) override {
        std::cout << "在Access中根据ID得到User表一条记录" << std::endl;
        User *user = new User;
        return user;
    }
};

REGISTER_CLASS(AccessUser)

#endif