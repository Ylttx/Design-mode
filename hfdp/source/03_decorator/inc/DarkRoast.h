#ifndef DARK_ROAST_H
#define DARK_ROAST_H
#include "Beverage.h"

class DarkRoast : public Beverage
{
public:
    DarkRoast() {
        m_description = "Dark Roast Coffee";
    }
 
    double cost() override {
        return 0.99;
    }
};

#endif // DARK_ROAST_H