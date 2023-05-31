#ifndef TESTPAPER_H
#define TESTPAPER_H

#include <string>
#include <iostream>
using namespace std;

class TestPaper {
public:
    virtual ~TestPaper() {}

    void TestQuestion1() {
        cout << "杨过得到，后来给了郭靖，炼成倚天剑、屠龙刀刀玄铁可能是（）\n"
            << "a. 球墨铸铁 b. 马口铁 c. 高速合金钢 d. 碳素纤维" << endl;

        cout << "答案：" << Answer1() << endl;
    }

    void TestQuestion2() {
        cout << "杨过、程英、陆无双铲除了情花，造成（）\n"
            << "a. 使这种植物不再害人 b. 使一种珍稀物种灭绝 c. 破坏了那个生态圈刀生态平衡 d. 造成该地区沙漠化" << endl;

        cout << "答案：" << Answer2() << endl;
    }

protected:
    virtual string Answer1() {
        return "";
    }

    virtual string Answer2() {
        return "";
    }

};

#endif