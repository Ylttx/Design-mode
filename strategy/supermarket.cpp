#include "CashContext.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv) {
    if (argc < 2) {
        cerr << "HELP $ " << argv[0] << " 99.4" << endl;
        exit(-1);
    }
    double money = atof(argv[1]);
    const string mode[] = {"正常收费", "满300减100", "打8折"};

    for (int i = 0; i < sizeof(mode) / sizeof(string); i++) {
        CashContext *cc = new CashContext(mode[i]);

        cout << mode[i] << ": " << money << " = " << cc->GetResult(money) << endl;

        delete cc;
    }

    return 0;
}