#ifndef WHIP_H
#define WHIP_H
#include "CondimentDecorator.h"

class Whip : public CondimentDecorator
{
public:
    explicit Whip(const std::shared_ptr<Beverage>& beverage) {
        m_beverage = beverage;
    }

    std::string getDescription() override {
        return m_beverage->getDescription() + ", Whip";
    }

    double cost() override {
        return m_beverage->cost() + .10;
    }
};

#endif // WHIP_H