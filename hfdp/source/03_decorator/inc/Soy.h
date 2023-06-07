#ifndef SOY_H
#define SOY_H
#include "CondimentDecorator.h"

class Soy : public CondimentDecorator
{
public:
    explicit Soy(const std::shared_ptr<Beverage>& beverage) {
        m_beverage = beverage;
    }

    std::string getDescription() override {
        return m_beverage->getDescription() + ", Soy";
    }

    double cost() override {
        return m_beverage->cost() + .15;
    }
};

#endif // SOY_H