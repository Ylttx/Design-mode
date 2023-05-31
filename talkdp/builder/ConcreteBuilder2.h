#ifndef CONCRETEBUILDER2_H
#define CONCRETEBUILDER2_H

#include "Builder.h"

class ConcreteBuilder2 : public Builder {
public:
    ConcreteBuilder2() {
        product = new Product();
    } 
    ~ConcreteBuilder2() {
        delete product;
    } 

    virtual void BuildPartA() {
        product->Add("部件X");
    }

    virtual void BuildPartB() {
        product->Add("部件Y");
    }

    virtual Product* GetResult() {
        return product;
    }

private:
    Product *product;
};

#endif