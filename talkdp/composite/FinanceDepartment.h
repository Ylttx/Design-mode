#ifndef FINANCE_DEPARTMENT_H
#define FINANCE_DEPARTMENT_H

#include "Company.h"
#include <iostream>

class FinanceDepartment : public Company {
public:
    FinanceDepartment(std::string &name) : Company(name) {}
    ~FinanceDepartment() {}

    void Add(Company *c) override {}
    void Remove(Company *c) override {}

    void Display(int depth) override {
        std::cout << std::string(depth, '-') << name;
        std::cout << std::endl;
    }

    void LineOfDuty() override {
        std::cout << name << ": 公司财务收支管理 \n";
    }
private:
};

#endif