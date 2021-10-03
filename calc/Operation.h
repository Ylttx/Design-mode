#ifndef OPERATION_H
#define OPERATION_H

#include <iostream>
class Operation {
public:
    // 抽象基类必须定义虚析构函数，从而在使用delete释放基类对象时，先调用子类的析构函数
    // 否则无法释放子类，造成内存泄漏
    virtual ~Operation() {
        std::cout << "~Operation \n";
    };

    double numA;
    double numB;

    virtual double GetResult() = 0;
};

#endif