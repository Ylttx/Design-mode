#ifndef PIZZA_INGREDIENT_FACTORY_H
#define PIZZA_INGREDIENT_FACTORY_H
#include <memory>
#include <vector>
using namespace std;

class Dough;
class Sauce;
class Cheese;
class Veggies;
class Pepperoni;
class Clams;

class PizzaIngredientFactory
{
public:
    virtual shared_ptr<Dough> createDough() = 0;
    virtual shared_ptr<Sauce> createSauce() = 0;
    virtual shared_ptr<Cheese> createCheese() = 0;
    virtual vector<shared_ptr<Veggies>> createVeggies() = 0;
    virtual shared_ptr<Pepperoni> createPepperoni() = 0;
    virtual shared_ptr<Clams> createClam() = 0;
};

#endif   // PIZZA_INGREDIENT_FACTORY_H