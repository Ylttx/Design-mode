#ifndef PIZZA_H
#define PIZZA_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Pizza
{
public:
    virtual void prepare()
    {
        cout << "Preparing " << m_name << endl;
        cout << "Tossing dough..." << endl;
        cout << "Adding sauce..." << endl;
        cout << "Adding toppings..." << endl;
        for (const auto &topping : m_toppings)
        {
            cout << "     " << topping << endl;
        }
    }

    virtual void bake() { cout << "Bake for 25 minutes at 350" << endl; }

    virtual void cut() { cout << "Cutting the pizza into diagonal slices" << endl; }
    virtual void box() { cout << "Place pizza in official PizzaStore box" << endl; }

    std::string getName() { return m_name; }

protected:
    std::string m_name;
    std::string m_dough;
    std::string m_sauce;
    std::vector<std::string> m_toppings;
};

#endif   // PIZZA_H