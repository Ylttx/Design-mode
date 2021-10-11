#ifndef SQLSERVER_DEPARTMENT_H
#define SQLSERVER_DEPARTMENT_H

#include "IDepartment.h"
#include <iostream>

class SqlserverDepartment : public IDepartment {
public:
    void Insert(const Department &Department) {
        std::cout << "在SQL Server中给Department表增加一条记录" << std::endl;
    } 

    Department* GetDepartment(int id) {
        std::cout << "在SQL Server中根据ID得到Department表一条记录" << std::endl;
        Department *dept = new Department;
        return dept;
    }
};

#endif