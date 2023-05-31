#ifndef CASH_NORMAL_H
#define CASH_NORMAL_H

#include "CashSuper.h"

class CashNormal : public CashSuper {
public:
    virtual double acceptCash(double money) {
        return money;
    };
};

#endif
