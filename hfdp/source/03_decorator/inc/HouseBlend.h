#ifndef HOUSE_BLEND_H
#define HOUSE_BLEND_H
#include "Beverage.h"

class HouseBlend : public Beverage
{
public:
    HouseBlend() {
        m_description = "House Blend Coffee";
    }
 
    double cost() override {
        return .89;
    }
};

#endif // HOUSE_BLEND_H