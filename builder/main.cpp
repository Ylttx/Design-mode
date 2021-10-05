#include "Director.h"
#include "ConcreteBuilder1.h"
#include "ConcreteBuilder2.h"

int main() {
    Director director;
    Builder *b1 = new ConcreteBuilder1();
    Builder *b2 = new ConcreteBuilder2();

    director.Construct(*b1);
    Product *p1 = b1->GetResult();
    p1->Show();
    delete b1;

    director.Construct(*b2);
    Product *p2 = b2->GetResult();
    p2->Show();
    delete b2;
    return 0;
}