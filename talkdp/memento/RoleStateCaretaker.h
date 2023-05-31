#ifndef ROLESTATE_CARETAKER_H
#define ROLESTATE_CARETAKER_H

class RoleStateMemento;

class RoleStateCaretaker {
public:
    RoleStateCaretaker() {}
    ~RoleStateCaretaker() {
        if (memento) {
            delete memento;
        }
    }

    RoleStateMemento* getMemento() {
        return memento;
    }

    void setMemento(RoleStateMemento *m) {
        memento = m;
    }

private:
    RoleStateMemento *memento;
};

#endif