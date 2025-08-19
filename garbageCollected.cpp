#include <iostream>

int main(){
    // reference
    int a = 10; int& ref = a;
    std::cout << "This is a = " << a <<
    "\nThis is ref = " << ref << "\nif you add ten to ref ";

    ref += 10;

    std::cout << "\na = " << a << "\nref = " << ref;

    std::cout << "\n-_-_--_--__--___---_____----\n";

    // pointer
    int x = 10; int* x_ptr = &x;
    std::cout << "*x_ptr = " << *x_ptr << 
    "\nx_ptr = " << x_ptr << "\nx = " << x
    << "\n&x = " << &x;

    // New and Delete memory manegment
    /*

    MyClass* obj = new MyClass();
    delete obj;

    int* arr = new int;
    delete arr;


    --> next page oop.css
    */




}