#include "Subject.h"
#include "Observer.h"

int main() {
    Subject *sub = new Subject;
    Observer *ob1 = new Observer(*sub, "A");
    Observer *ob2 = new Observer(*sub, "B");
    Observer *ob3 = new Observer(*sub, "C");

    sub->CreateMessage("Hello World!");

    delete ob1;
    delete ob2;
    delete ob3;
    delete sub;

    return 0;
}