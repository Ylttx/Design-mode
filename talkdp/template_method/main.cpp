#include "TestPaperA.h"
#include "TestPaperB.h"

int main() {
    TestPaper *studentA = new TestPaperA();
    studentA->TestQuestion1();
    studentA->TestQuestion2();
    delete studentA;

    cout << endl;

    TestPaper *studentB = new TestPaperB();
    studentB->TestQuestion1();
    studentB->TestQuestion2();
    delete studentB;

    return 0;
}