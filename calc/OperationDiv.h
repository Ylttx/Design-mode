#ifndef OPERATION_DIV_H
#define OPERATION_DIV_H

#include "Operation.h"

class OperationDiv : public Operation
{
public:

    double GetResult() {
        if (0 == numB)
            throw "除数不能为0";
        return numA / numB;
    }
};

#endif