#include "GameRole.h"
#include "RoleStateCaretaker.h"

int main() {
    // 大战前夕
    GameRole *ttx = new GameRole();
    ttx->StateDisplay();

    // 保存进度
    RoleStateCaretaker *stateAdmin = new RoleStateCaretaker();
    stateAdmin->setMemento(ttx->SaveState());

    // 大战300回合
    ttx->Fight();
    ttx->StateDisplay();

    // 恢复进度
    ttx->RecoveryState(stateAdmin->getMemento());
    ttx->StateDisplay();


    delete ttx;
    delete stateAdmin;

    return 0;
}