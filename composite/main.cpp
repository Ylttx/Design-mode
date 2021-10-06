#include "ConcreteCompany.h"
#include "HRDepartment.h"
#include "FinanceDepartment.h"

std::string name[] = {
    "北京总公司",
    "总公司人力资源部",
    "总公司财务部",
    "上海华东分公司",
    "上海华东分公司人力资源部",
    "上海华东分公司财务部",
    "南京办事处",
    "南京办事处人力资源部",
    "南京办事处财务部",
    "杭州办事处",
    "杭州办事处人力资源部",
    "杭州办事处财务部"
};

int main() {
    Company *root = new ConcreteCompany(name[0]);
    root->Add(new HRDepartment(name[1]));
    root->Add(new FinanceDepartment(name[2]));

    Company *comp = new ConcreteCompany(name[3]);
    comp->Add(new HRDepartment(name[4]));
    comp->Add(new HRDepartment(name[5]));
    root->Add(comp);

    Company *comp1 = new ConcreteCompany(name[6]);
    comp1->Add(new HRDepartment(name[7]));
    comp1->Add(new HRDepartment(name[8]));
    root->Add(comp1);

    Company *comp2 = new ConcreteCompany(name[9]);
    comp2->Add(new HRDepartment(name[10]));
    comp2->Add(new HRDepartment(name[11]));
    root->Add(comp2);

    std::cout << "结构图：" << std::endl;
    root->Display(1);

    std::cout << "\n职责：" << std::endl;
    root->LineOfDuty();

    delete root;
    return 0;
}