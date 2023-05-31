#ifndef IDEPARTMENT_H
#define IDEPARTMENT_H

#include <string>

class Department;

class IDepartment {
public:
    virtual ~IDepartment() {}
    virtual void Insert(const Department &Department) = 0;
    virtual Department* GetDepartment(int id) = 0;
};

class Department {
public:
    int getId() {return _id;}
    void setId(int id) {_id = id;}

    const std::string& getDeptName() {return _deptName;}
    void setDeptName(std::string name) {_deptName = name;}

private:
    int _id;
    std::string _deptName;
};

#endif