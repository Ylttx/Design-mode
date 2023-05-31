#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Builder.h"

class Director {
public:
    void Construct(Builder &builder) {
        builder.BuildPartA();
        builder.BuildPartB();
    }
};

#endif