#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

using namespace std;

class Person {
public:
    Person() {}
    virtual ~Person() {}
    Person(string &name) {
        this->name = name;
    }

    virtual void show() {
        cout << "装扮的" << name << endl;
    }

private:
    string name;
};

#endif 