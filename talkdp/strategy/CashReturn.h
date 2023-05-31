#ifndef CASH_RETURN_H
#define CASH_RETURN_H

#include "CashSuper.h"
#include <string>
#include <sstream>
#include <cmath>

class CashReturn : public CashSuper {
public:
    CashReturn(const std::string &moneyCondition, const std::string &moneyReturn) {
        std::istringstream iss(moneyCondition);
        iss >> _mCondition;

        std::istringstream iss1(moneyReturn);
        iss1 >> _mReturn;
    }

    virtual double acceptCash(double money) {
        double result = money;
        if (money >= _mCondition) {
            result -= floor(money / _mCondition) * _mReturn;
        }
        return result;
    };

private:
    double _mCondition = 0.0;
    double _mReturn = 0.0;
};

#endif
