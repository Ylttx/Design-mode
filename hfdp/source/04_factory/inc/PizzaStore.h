#ifndef PIZZA_STORE_H
#define PIZZA_STORE_H
#include "Pizza.h"
#include <memory>

class PizzaStore
{
public:
    shared_ptr<Pizza> orderPizza(string type)
    {
        shared_ptr<Pizza> pizza = createPizza(type);

        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
    }

protected:
    // 工厂方法
    virtual shared_ptr<Pizza> createPizza(string type) = 0;
};

#endif   // PIZZA_STORE_H