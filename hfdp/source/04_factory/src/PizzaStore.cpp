#include "PizzaStore.h"
#include "ChicagoPizzaStore.h"
#include "NYPizzaStore.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    PizzaStore *nyStore = new NYPizzaStore();
    PizzaStore *chicagoStore = new ChicagoPizzaStore();

    auto pizza = nyStore->orderPizza("cheese");
    cout << "Ethan ordered a " << pizza->getName() << endl;

    pizza = chicagoStore->orderPizza("cheese");
    cout << "Joel ordered a " << pizza->getName() << endl;
}