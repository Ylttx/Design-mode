#ifndef IUSER_H
#define IUSER_H

#include <string>

class User;

class IUser {
public:
    virtual ~IUser() {}
    virtual void Insert(const User &user) = 0;
    virtual User* GetUser(int id) = 0;
};

class User {
public:
    int getId() {return _id;}
    void setId(int id) {_id = id;}

    const std::string& getName() {return _name;}
    void setName(std::string name) {_name = name;}

private:
    int _id;
    std::string _name;
};

#endif