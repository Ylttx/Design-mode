#ifndef SUBJECT_H
#define SUBJECT_H
#include <memory>
#include <list>

class Observer;
class Subject
{
protected:
    std::list<std::shared_ptr<Observer>> m_observers;

public:
    virtual ~Subject() {}

    void registerObserver(const std::shared_ptr<Observer>& o) {
        m_observers.push_back(o);
    }

    void removeObserver(const std::shared_ptr<Observer>& o) {
        m_observers.remove(o);
    }

    virtual void notifyObservers() = 0;
};

#endif // SUBJECT_H