#include "Prototype.h"
#include <iostream>

using namespace std;

int main() {
    ConcretePrototypeA *cpa = new ConcretePrototypeA(100);
    ConcretePrototypeA *cpb = cpa->clone();

    cout << cpa->count() << ' ' << cpb->count() << endl;
    cout << cpa << ' ' << cpb << endl;

    delete cpa;
    delete cpb;

    return 0;
}