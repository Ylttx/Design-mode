#ifndef CHICAGO_PIZZA_STORE_H
#define CHICAGO_PIZZA_STORE_H
#include "ChicagoStyleCheesePizza.h"
#include "PizzaStore.h"

class ChicagoPizzaStore : public PizzaStore
{
public:
    shared_ptr<Pizza> createPizza(string type) override
    {
        shared_ptr<Pizza> pizza;

        if (type == "cheese")
            pizza = make_shared<ChicagoStyleCheesePizza>();

        return pizza;
    }
};

#endif   // CHICAGO_PIZZA_STORE_H