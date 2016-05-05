//decorator.cpp


#include <iostream>
#include <cmath>

using namespace std;

#include "decorator.h"

Decorator::Decorator(Base* child) {
    this->child = child;
    return;
}
Base* Decorator::get_child() {
    return this->child;
}
void Decorator::set_child(Base* child) {
    this->child = child;
    return;
}


Ceil::Ceil(Base* child) : Decorator(child) {};
double Ceil::evaluate() {
    return ceil(get_child()->evaluate());
}

Floor::Floor(Base* child) : Decorator(child) {};
double Floor::evaluate() {
    return floor(get_child()->evaluate());
}

AbsValue::AbsValue(Base* child) : Decorator(child) {};
double AbsValue::evaluate() {
    return abs(get_child()->evaluate());
}


