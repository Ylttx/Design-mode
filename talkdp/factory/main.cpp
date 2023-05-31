#include "UndergraduateFactory.h"
#include "VolunteerFactory.h"

int main() {
    // 要替换成社区志愿者，只需要修改具体工厂类即可
    IFactory *factory = new UndergraduateFactory();
    LeiFeng *lf = factory->CreateLeiFeng();

    lf->buyRice();
    lf->sweep();
    lf->wash();

    delete factory;
    delete lf;
    
    return 0;
}