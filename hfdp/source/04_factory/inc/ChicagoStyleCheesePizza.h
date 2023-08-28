#ifndef CHICAGO_STYLE_CHEESE_PIZZA_H
#define CHICAGO_STYLE_CHEESE_PIZZA_H
#include "Pizza.h"

class ChicagoStyleCheesePizza : public Pizza
{
public:
    ChicagoStyleCheesePizza()
    {
        m_name = "Chicago Style Deep Dish Cheese Pizza";
        m_dough = "Extra Thick Crust Dough";
        m_sauce = "Plum Tomato Sauce";

        m_toppings.push_back("Shredded Mozzarella Cheese");
    }

    void cut() override { cout << "Cutting the pizza into square slices" << endl; }
};


#endif   // CHICAGO_STYLE_CHEESE_PIZZA_H