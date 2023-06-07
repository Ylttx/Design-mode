#ifndef BEVERAGE_H
#define BEVERAGE_H
#include <string>
#include <iostream>
#include <memory>

class Beverage
{
public:
    virtual ~Beverage() {}

    virtual std::string getDescription() {
        return m_description;
    }

    virtual double cost() = 0;

    friend std::ostream& operator<<(std::ostream& os, const std::shared_ptr<Beverage>& beverage);
 
protected:
    std::string m_description = "Unkown Beverage";
};

std::ostream& operator<<(std::ostream& os, const std::shared_ptr<Beverage>& beverage) {
    os << beverage->getDescription() << " $" << beverage->cost();
    return os;
}

#endif // BEVERAGE_H