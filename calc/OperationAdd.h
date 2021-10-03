#ifndef OPERATION_ADD_H
#define OPERATION_ADD_H

#include "Operation.h"

class OperationAdd : public Operation
{
public:

    double GetResult() {
        return numA + numB;
    }
};

#endif