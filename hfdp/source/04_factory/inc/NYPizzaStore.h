#ifndef NYPIZZA_SOTRE_H
#define NYPIZZA_SOTRE_H
#include "NYStyleCheesePizza.h"
#include "PizzaStore.h"
#include <memory>

class NYPizzaStore : public PizzaStore
{
public:
    shared_ptr<Pizza> createPizza(string type) override
    {
        shared_ptr<Pizza> pizza;

        if (type == "cheese")
            pizza = make_shared<NYStyleCheesePizza>();

        return pizza;
    }
};


#endif   // NYPIZZA_SOTRE_H