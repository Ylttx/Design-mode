#ifndef CONCRETE_COMPANY_H
#define CONCRETE_COMPANY_H

#include "Company.h"
#include <list>
#include <iostream>

class ConcreteCompany : public Company {
public:
    ConcreteCompany(std::string &name) : Company(name) {}
    ~ConcreteCompany() {}

    void Add(Company *c) override {
        children.emplace_back(c);
    }

    void Remove(Company *c) override {
        children.remove(c);
    }

    void Display(int depth) override {
       std::cout << std::string(depth, '-') << name << std::endl;

        for (auto& c : children) {
            c->Display(depth + 2);
        }
    }

    void LineOfDuty() override {
        for (auto& c : children) {
            c->LineOfDuty();
        }
    }

private:
    std::list<Company*> children;
};

#endif