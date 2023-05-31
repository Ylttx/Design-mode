#include <iostream>

class Receiver {
public:
    void Action() {
        std::cout << "执行请求!\n";
    }
};

class Command {
public:
    Command(Receiver *receiver) : receiver(receiver) {}
    virtual ~Command() {}

    virtual void Execute() = 0;

protected:
    Receiver *receiver;
};

class Invoker {
public:
    Invoker() {}
    ~Invoker() {}

    void setCommand(Command *command) {
        this->command = command;
    }

    void ExecuteCommand() {
        command->Execute();
    }

private:
    Command *command;
};

class ConcreteCommand : public Command {
public:
    ConcreteCommand(Receiver *receiver) : Command(receiver) {}
    ~ConcreteCommand() {}

     void Execute() override {
         receiver->Action();
     }
};

int main() {
    Receiver *r = new Receiver();
    Command *c = new ConcreteCommand(r);
    Invoker *i = new Invoker();

    i->setCommand(c);
    i->ExecuteCommand();

    return 0;
}