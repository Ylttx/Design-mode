#include "Context.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"

int main() {
    State *A = new ConcreteStateA();
    State *B = new ConcreteStateB();
    Context *context = new Context(A);

    context->Request();
    context->ChangeState(B);
    context->Request();

    delete A;
    delete B;
    delete context;
    return 0;
}