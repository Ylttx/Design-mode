#ifndef NYSTYLE_CHEESE_PIZZA_H
#define NYSTYLE_CHEESE_PIZZA_H
#include "Pizza.h"

class NYStyleCheesePizza : public Pizza
{
public:
    NYStyleCheesePizza()
    {
        m_name = "NY Style Sauce and Cheese Pizza";
        m_dough = "Thin Crust Dough";
        m_sauce = "Marinara Sauce";

        m_toppings.push_back("Grated Regginao Cheese");
    }
};


#endif   // NYSTYLE_CHEESE_PIZZA_H