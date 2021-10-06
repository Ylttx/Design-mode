#include <string>
#include <iostream>
using namespace std;

class Request {
public:
    string type;
    string content;
    int number;
};

class Manager {
public:
    Manager(string &name) : name(name) {}
    virtual ~Manager() {}

    void setSuperior(Manager *superior) {
        this->superior = superior;
    }
    
    virtual void RequestApplications(const Request &request) = 0;

protected:
    string name;
    Manager *superior;
};

class CommonManager : public Manager {
public:
    CommonManager(string &name) : Manager(name) {}
    ~CommonManager() {}

    void RequestApplications(const Request &request) override {
        if (request.type == "请假" && request.number <= 2) {
            cout << name << ":" << request.content << "数量" << request.number << "被批准\n";
        } else {
            if (superior) {
                superior->RequestApplications(request);
            }
        }
    }
};

class Majordomo : public Manager {
public:
    Majordomo(string &name) : Manager(name) {}
    ~Majordomo() {}

    void RequestApplications(const Request &request) override {
        if (request.type == "请假" && request.number <= 5) {
            cout << name << ":" << request.content << "数量" << request.number << "被批准\n";
        } else {
            if (superior) {
                superior->RequestApplications(request);
            }
        }
    }
};

class GeneralManager : public Manager {
public:
    GeneralManager(string &name) : Manager(name) {}
    ~GeneralManager() {}

    void RequestApplications(const Request &request) override {
        if (request.type == "请假") {
            cout << name << ":" << request.content << "数量" << request.number << "被批准\n";
        } else if (request.type == "加薪" && request.number <= 500) {
            cout << name << ":" << request.content << "数量" << request.number << "被批准\n";
        } else if (request.type == "加薪" && request.number > 500) {
            cout << name << ":" << request.content << "数量" << request.number << "再说吧\n";
        }
    }
};

int main() {
    string name[] = {
        "金利",
        "宗剑",
        "钟精利"
    };

    CommonManager *jinli = new CommonManager(name[0]);
    Majordomo *zongjian = new Majordomo(name[1]);
    GeneralManager *zongjingli = new GeneralManager(name[2]);
    jinli->setSuperior(zongjian);
    zongjian->setSuperior(zongjingli);

    Request request;
    request.type = "请假";
    request.content = "小菜请假";
    request.number = 1;
    jinli->RequestApplications(request);

    request.type = "请假";
    request.content = "小菜请假";
    request.number = 4;
    jinli->RequestApplications(request);

    request.type = "加薪";
    request.content = "小菜请求加薪";
    request.number = 500;
    jinli->RequestApplications(request);

    request.type = "加薪";
    request.content = "小菜请求加薪";
    request.number = 1000;
    jinli->RequestApplications(request);

    delete jinli;
    delete zongjian;
    delete zongjingli;
    return 0;
}