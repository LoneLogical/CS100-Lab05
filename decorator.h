//decorator.h

#ifndef DECORATOR_H
#define DECORATOR_H
#include "class.h"

class Decorator : public Base {
    private:
        Base* child;
    public:
        Decorator(Base* child);
        virtual double evaluate() = 0;
        virtual Base* get_child();
        virtual void set_child(Base* child);

};

class Ceil : public Decorator {  
    public:
        Ceil(Base* child);
        virtual double evaluate();
};

class Floor : public Decorator {
    public:
        Floor(Base* child);
        virtual double evaluate();
};

class AbsValue : public Decorator {
    public:
        AbsValue(Base* child);
        virtual double evaluate();
};

#endif

