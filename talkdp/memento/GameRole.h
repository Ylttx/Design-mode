#ifndef GAMEROLE_H
#define GAMEROLE_H

#include "RoleStateMemento.h"
#include <iostream>

class GameRole {
public:
    GameRole() : vit(100), atk(100), def(100) {}
    ~GameRole() {}

    RoleStateMemento* SaveState() {
        return new RoleStateMemento(vit, atk, def);
    } 

    void RecoveryState(RoleStateMemento *memento) {
        this->vit = memento->vit;
        this->atk = memento->atk;
        this->def = memento->def;
    }

    void StateDisplay() {
        std::cout << "角色当前状态："
                << " 体力：" << vit
                << " 攻击力：" << atk
                << " 防御力：" << def << std::endl;
    }

    void Fight() {
        vit = 0;
        atk = 0;
        def = 0;
    }

private:
    double vit;
    double atk;
    double def;
};

#endif