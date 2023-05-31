#ifndef OPERATION_FACTORY_H
#define OPERATION_FACTORY_H

#include "OperationAdd.h"
#include "OperationSub.h"
#include "OperationMul.h"
#include "OperationDiv.h"
#include <string>

class OperationFactory
{
public:
    static Operation* createOperation(std::string op) {
        Operation *oper = 0;

        if ("+" == op) {
            oper = new OperationAdd();
        } else if ("-" == op) {
            oper = new OperationSub();
        } else if ("*" == op) {
            oper = new OperationMul();
        } else if ("/" == op) {
            oper = new OperationDiv();
        } else {
            throw "Unsupport operation\n";
        }

        return oper;
    }
};

#endif