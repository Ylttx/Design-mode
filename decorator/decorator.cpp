#include "TShirts.h"
#include "BigTrouser.h"


int main() {
    string name("小菜");
    Person *xc = new Person(name);
    Person *bt = new BigTrouser(xc);
    Person *ts = new TShirts(bt);

    ts->show();

    delete ts;
    delete bt;
    delete xc;

    return 0;
}