#ifndef MOCHA_H
#define MOCHA_H
#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator
{
public:
    explicit Mocha(const std::shared_ptr<Beverage>& beverage) {
        m_beverage = beverage;
    }

    std::string getDescription() override {
        return m_beverage->getDescription() + ", Mocha";
    }

    double cost() override {
        return m_beverage->cost() + .20;
    }
};

#endif // MOCHA_H