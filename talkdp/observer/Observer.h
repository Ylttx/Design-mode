#ifndef OBSERVER_H
#define OBSERVER_H

#include "IObserver.h"
#include "Subject.h"

class Observer : public IObserver {
public:
    Observer(Subject &sub, const std::string name) : _name(name),_sub(sub) {
        this->_sub.Attach(this);
    }

    ~Observer() {
        _sub.Detach(this);
        std::cout << "Observer " << _name << "\" removed from the list.\n";
    }

    void Update(const std::string &message) override {
        _message = message;
        std::cout << _name << ": a new message is available --> " << this->_message << "\n";
    }

private:
    std::string _name;
    std::string _message;
    Subject &_sub;
};

#endif