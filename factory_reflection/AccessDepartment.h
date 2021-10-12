#ifndef ACCESS_DEPARTMENT_H
#define ACCESS_DEPARTMENT_H

#include "IDepartment.h"
#include "Register.h"
#include <iostream>

class AccessDepartment : public IDepartment {
public:
    void Insert(const Department &Department) {
        std::cout << "在Access中给Department表增加一条记录" << std::endl;
    } 

    Department* GetDepartment(int id) {
        std::cout << "在Access中根据ID得到Department表一条记录" << std::endl;
        Department *dept = new Department;
        return dept;
    }
};

REGISTER_CLASS(AccessDepartment);

#endif