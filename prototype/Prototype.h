#ifndef PROTOTYPE_H
#define PROTOTYPE_H

class Prototype {
public:
    Prototype() {}
    virtual ~Prototype() {}

    virtual Prototype* clone() = 0;
};

class ConcretePrototypeA : public Prototype {
public:
    ConcretePrototypeA() : _count(0) {}
    ConcretePrototypeA(int count) : _count(count) {}

    virtual ~ConcretePrototypeA() {}

    ConcretePrototypeA(const ConcretePrototypeA &rhs) {
        _count = rhs._count;
    }

    virtual ConcretePrototypeA* clone() {
        return new ConcretePrototypeA(*this);
    }

    int count() const {
        return _count;
    }

private:
    int _count;
};

#endif