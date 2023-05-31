#ifndef HRDEPARTMENT_H
#define HRDEPARTMENT_H

#include "Company.h"
#include <iostream>

class HRDepartment : public Company {
public:
    HRDepartment(std::string &name) : Company(name) {}
    ~HRDepartment() {}

    void Add(Company *c) override {}
    void Remove(Company *c) override {}

    void Display(int depth) override {
        std::cout << std::string(depth, '-') << name;
        std::cout << std::endl;
    }

    void LineOfDuty() override {
        std::cout << name << ": 员工招聘培训管理 \n";
    }
private:
};

#endif