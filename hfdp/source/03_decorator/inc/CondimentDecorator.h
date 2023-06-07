#ifndef CONDIMENT_DECORATOR_H
#define CONDIMENT_DECORATOR_H
#include "Beverage.h"
#include <memory>

class CondimentDecorator : public Beverage
{
public:
    virtual ~CondimentDecorator() {}

protected:
    std::shared_ptr<Beverage> m_beverage;
};

#endif // CONDIMENT_DECORATOR_H