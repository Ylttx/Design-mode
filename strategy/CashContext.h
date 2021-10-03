#ifndef CASH_CONTEXT_H
#define CASH_CONTEXT_H

#include "CashNormal.h"
#include "CashReturn.h"
#include "CashRebate.h"

class CashContext {
private:
    CashSuper *_cs;

public:
    // 简单工厂与策略模式结合
    CashContext(const std::string &type) {
        if ("正常收费" == type) {
            _cs = new CashNormal();
        } else if ("满300减100" == type) {
            _cs = new CashReturn("300", "100");
        } else if ("打8折" == type) {
            _cs = new CashRebate("0.8");
        }
    }

    ~CashContext() {delete _cs;}

    double GetResult(double money) {
        return _cs->acceptCash(money);
    }
};

#endif