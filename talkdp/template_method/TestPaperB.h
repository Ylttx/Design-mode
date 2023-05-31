#ifndef TEST_PATERB_H
#define TEST_PATERB_H

#include "TestPaper.h"

class TestPaperB : public TestPaper {
protected:

    virtual string Answer1() {
        return "a";
    }

    virtual string Answer2() {
        return "d";
    }
};

#endif