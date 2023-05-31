#ifndef SUBJECT_H
#define SUBJECT_H

#include "ISubject.h"
#include <iostream>
#include <list>

class Subject : ISubject {
public:
    ~Subject() {
        std::cout << "Goodbye, I was the Subject.\n";
    }

    void Attach(IObserver *observer) override {
        _observers.push_back(observer);
    }

    void Detach(IObserver *observer) override {
        _observers.remove(observer);
    }

    void Notify() override {
        std::list<IObserver *>::iterator iterator = _observers.begin();
        while (iterator != _observers.end()) {
            (*iterator)->Update(_message);
            ++iterator;
        }
    }

    void CreateMessage(std::string message = "Empty") {
        this->_message = message;
        Notify();
    }

private:
    std::list<IObserver *> _observers;
    std::string _message;
};

#endif