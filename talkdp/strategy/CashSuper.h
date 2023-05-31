#ifndef CASH_SUPER_H
#define CASH_SUPER_H

class CashSuper {
public:
    virtual ~CashSuper() {}

    virtual double acceptCash(double money) = 0;
};

#endif
