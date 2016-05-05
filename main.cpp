#include <iostream>

using namespace std;
#include "class.h"
#include "decorator.h"
#include "sort.h"
#include "container.h"


int main() {
    Op* op1 = new Op(2.6);
    Op* op2 = new Op(4.0);
    Op* op3 = new Op(3.5);
    Op* op4 = new Op(15.0);
    Mult* A = new Mult(op1, op2);  // 10.4
    Add* B = new Add(op3, A);      // 13.9
    Sub* C = new Sub(B, op4);      // -1.1
    Sqr* D = new Sqr(C);           // 1.21
    Ceil* E = new Ceil(D);         // 2.0
    Floor* F = new Floor(C);       // -2.0
    AbsValue* G = new AbsValue(C); // 1.1
    


    VectorContainer* container1 = new VectorContainer();
    container1->add_element(A);
    container1->add_element(B);
    container1->add_element(C);
    container1->add_element(D);
    container1->add_element(E);
    container1->add_element(F);
    container1->add_element(G);


    ListContainer* container2 = new ListContainer();
    container2->add_element(A);
    container2->add_element(B);
    container2->add_element(C);
    container2->add_element(D);
    container2->add_element(E);
    container2->add_element(F);
    container2->add_element(G);


    cout << "Container1 Before Sort" << endl;
    container1->print();

    cout << "Container1 After Sort" << endl;
    container1->set_sort_function(new BubbleSort());
    container1->sort();
    container1->print();

    cout << "Container2 Before Sort" << endl;
    container2->print();

    cout << "Container2 After Sort" << endl;
    container2->set_sort_function(new BubbleSort());
    container2->sort();
    container2->print();



    return 0;
}
