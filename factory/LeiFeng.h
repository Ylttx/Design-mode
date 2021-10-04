#ifndef LEIFENG_H
#define LEIFENG_H

#include <iostream>
using namespace std;

class LeiFeng {
public:
    virtual ~LeiFeng() {}

    void sweep() {
        cout << "扫地";
    }

    void wash() {
        cout << "洗衣";
    }

    void buyRice() {
        cout << "买米";
    }
};

#endif