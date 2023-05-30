#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"
#include "DecoyDuck.h"
#include "FlyWithWings.h"
#include "FlyNoWay.h"
#include "Quack.h"
#include "Squeak.h"
#include "MuteQuack.h"

int main(int argc, char** argv) {
    shared_ptr<Duck> mallard = make_shared<MallardDuck>();
    mallard->setFlyBehavior(make_shared<FlyWithWings>());
    mallard->setQuackBehavior(make_shared<Quack>());

    mallard->display();
    mallard->performQuack();
    mallard->performFly();

    shared_ptr<Duck> rubber_duck = make_shared<RubberDuck>();
    rubber_duck->display();
 
    // 一开始不会飞
    rubber_duck->setFlyBehavior(make_shared<FlyNoWay>());
    rubber_duck->performFly();

    // 现在会飞了
    rubber_duck->setFlyBehavior(make_shared<FlyWithWings>());
    rubber_duck->performFly();
}