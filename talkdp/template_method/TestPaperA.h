#ifndef TEST_PATERA_H
#define TEST_PATERA_H

#include "TestPaper.h"

class TestPaperA : public TestPaper {
protected:

    virtual string Answer1() {
        return "b";
    }

    virtual string Answer2() {
        return "c";
    }
};

#endif