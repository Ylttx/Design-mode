#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Product {
public:
    void Add(string part) {
        parts.push_back(part);
    }

    void Show() {
        cout << "\n产品 创建 ---- " << endl;
        for (auto& part : parts) {
            cout << part << endl;
        }
    }

private:
    vector<string> parts;
};

#endif