#ifndef OPERATION_SUB_H
#define OPERATION_SUB_H

#include "Operation.h"

class OperationSub : public Operation
{
public:

    double GetResult() {
        return numA - numB;
    }
};

#endif