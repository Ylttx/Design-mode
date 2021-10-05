#ifndef BUILDER_H
#define BUILDER_H

#include "Product.h"

class Builder {
public:
    virtual ~Builder() {}
    virtual void BuildPartA() = 0;
    virtual void BuildPartB() = 0;
    virtual Product* GetResult() = 0;
};

#endif