#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    int getId() {return _id;}
    void setId(int id) {_id = id;}

    std::string getName() {return _name;}
    void setName(std::string name) {_name = name;}

private:
    int _id;
    std::string _name;
};

#endif