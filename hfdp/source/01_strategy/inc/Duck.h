#ifndef DUCK_H
#define DUCK_H
#include "FlyBehavior.h"
#include "QuackBehavior.h"
#include <memory>

#include <iostream>
using namespace std;

class Duck {
private:
    std::shared_ptr<FlyBehavior> m_fly_behavior;
    std::shared_ptr<QuackBehavior> m_quack_behavior;

public:
    virtual ~Duck() {}
 
    void swim() { cout << "I am swimming..." << endl; };

    virtual void display() = 0;

    void performFly() {
        m_fly_behavior->fly();
    }
 
    void performQuack() {
        m_quack_behavior->quack();
    }

    void setFlyBehavior(const std::shared_ptr<FlyBehavior>& behavior) {
        m_fly_behavior = behavior;
    }
 
    void setQuackBehavior(const std::shared_ptr<QuackBehavior>& behavior) {
        m_quack_behavior = behavior;
    }
};

#endif // DUCK_H