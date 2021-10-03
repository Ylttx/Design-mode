#include "OperationFactory.h"
#include <iostream>

using namespace std;

int main() {
    string op;
    double A, B;
    
    cout << "INPUT: ";
    cin >> A >> op >> B;

    Operation *oper = OperationFactory::createOperation(op);
    oper->numA = A;
    oper->numB = B;
    
    cout << " = " << oper->GetResult() << endl;

    delete oper;
    return 0;
}