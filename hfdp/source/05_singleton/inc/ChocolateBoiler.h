#ifndef CHOCOLATE_BOILER_H
#define CHOCOLATE_BOILER_H
#include <cstddef>
#include <memory>
#include <iostream>

class ChocolateBoiler
{
public:
    static std::shared_ptr<ChocolateBoiler> getInstance()
    {
        static std::shared_ptr<ChocolateBoiler> g_instance(new ChocolateBoiler);
        return g_instance;
    }

    void fill()
    {
        if (isEmpty())
        {
            empty = false;
            boiled = false;
            std::cout << "往锅炉里填充牛奶/巧克力混合物" << std::endl;
        }
    }

    void drain()
    {
        if (!isEmpty() && isBoiled())
        {
            std::cout << "派出煮沸的牛奶和巧克力" << std::endl;
            empty = true;
        }
    }

    void boil()
    {
        if (!isEmpty() && !isBoiled())
        {
            std::cout << "将锅炉煮沸" << std::endl;
            boiled = true;
        }
    }

    const bool isEmpty() const { return empty; }

    const bool isBoiled() const { return boiled; }

private:
    ChocolateBoiler() {}

    bool empty = true;
    bool boiled = false;
};

#endif   // CHOCOLATE_BOILER_H