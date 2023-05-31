#ifndef COMPANY_H
#define COMPANY_H

#include <string>

class Company {
public:
    Company(std::string &name) : name(name) {}
    virtual ~Company() {}

    virtual void Add(Company *c) = 0;
    virtual void Remove(Company *c) = 0;
    virtual void Display(int depth) = 0;
    virtual void LineOfDuty() = 0;

protected:
    std::string name;
};

#endif