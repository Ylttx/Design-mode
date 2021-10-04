#ifndef VOLUNTEER_FACTORY_H
#define VOLUNTEER_FACTORY_H

#include "IFactory.h"
#include "Volunteer.h"

class VolunteerFactory : public IFactory {
public:
    virtual LeiFeng* CreateLeiFeng() {
        return new Volunteer();
    }
};

#endif