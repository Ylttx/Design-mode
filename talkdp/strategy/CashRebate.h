#ifndef CASH_REBATE_H
#define CASH_REBATE_H

#include "CashSuper.h"
#include <string>
#include <sstream>

class CashRebate : public CashSuper {
public:
    CashRebate(const std::string &rebate) {
        std::istringstream iss(rebate);
        iss >> _rebate;
    }

    virtual double acceptCash(double money) {
        return money * _rebate;
    };

private:
    double _rebate = 0.0;
};

#endif
