#ifndef CONCRETEBUILDER1_H
#define CONCRETEBUILDER1_H

#include "Builder.h"

class ConcreteBuilder1 : public Builder {
public:
    ConcreteBuilder1() {
        product = new Product();
    } 
    ~ConcreteBuilder1() {
        delete product;
    } 

    virtual void BuildPartA() {
        product->Add("部件A");
    }

    virtual void BuildPartB() {
        product->Add("部件B");
    }

    virtual Product* GetResult() {
        return product;
    }

private:
    Product *product;
};

#endif