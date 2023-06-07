#include "DarkRoast.h"
#include "Decaf.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "Mocha.h"
#include "Soy.h"
#include "Whip.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    shared_ptr<Beverage> beverage = make_shared<Espresso>();
    cout << beverage << endl;

    shared_ptr<Beverage> beverage2 = make_shared<DarkRoast>();
    beverage2 = make_shared<Mocha>(beverage2);
    beverage2 = make_shared<Mocha>(beverage2);
    beverage2 = make_shared<Whip>(beverage2);
    cout << beverage2 << endl;

    shared_ptr<Beverage> beverage3 = make_shared<HouseBlend>();
    beverage3 = make_shared<Soy>(beverage3);
    beverage3 = make_shared<Mocha>(beverage3);
    beverage3 = make_shared<Whip>(beverage3);
    cout << beverage3 << endl;
}