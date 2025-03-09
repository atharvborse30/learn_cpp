#include <iostream>

// Pointers - a datatype that stores an address
// dereferencing - retrieve the value of the type we point to.

int main() {

    int x = 7;
    int* px = &x;
    int* px2 = &x;

    //update the value of x
    x = 9;

    std::cout << "x stores           :" << x <<std::endl;
    std::cout << "x addr             :" << &x <<std::endl;

    std::cout << "px stores          :" << px <<std::endl;
    std::cout << "px dereferenced    :" << *px <<std::endl;

    std::cout << "px2 stores         :" << px2 <<std::endl;
    std::cout << "px2 deferenced     :" << *px2 <<std::endl;
}