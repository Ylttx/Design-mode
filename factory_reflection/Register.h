#ifndef REGISTER_H
#define REGISTER_H

#define REGISTER_CLASS(className)                              \
    className* Create##className() {                           \
        return new className;                                  \
    }

#define REGISTER(className) {#className, (pCreateObject) Create##className}

#endif