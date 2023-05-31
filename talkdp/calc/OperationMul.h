#ifndef OPERATION_MUL_H
#define OPERATION_MUL_H

#include "Operation.h"

class OperationMul : public Operation
{
public:
    ~OperationMul() {
        std::cout << "~Operation mul \n";
    };

    double GetResult() {
        return numA * numB;
    }
};

#endif