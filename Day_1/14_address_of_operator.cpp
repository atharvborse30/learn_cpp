#include <iostream>

// remember to treat always & (address of) as a function itself

void foo() {
    //x = 72;
}

int main() {

    // & (address of) gives us where in memory some variable lives

    int x = 42;
    float y = 72;
    char a = 'a';
    signed char b = 'b';
    unsigned char c = 'c';

    std::cout << "x: " << &(x) << std::endl;
    std::cout << "x's size : " << sizeof(x) << std::endl;
    std::cout << "y: " << &(y) << std::endl;
    std::cout << "a: " << (void*)&(a) << std::endl;  // (void*) here is a pointer which stores an address of something
    // it is saying explicitly treat this (void*)&a as an address and then return the address of that
    std::cout << "b: " << (void*)&(b) << std::endl;
    std::cout << "c: " << (void*)&(c) << std::endl;

    // functions too live in the memory as well so to know where the function is stored its adress
    std::cout << "function foo's address: " << (void*)&(foo) << std::endl;

    // finding the address of main function
    std::cout << "address of main function: " << (void*)&(main) << std::endl;

    //this is same as above we can write &(x) instead of &x also both will work and are same
    std::cout << "x: " << &x << std::endl;
    std::cout << "c: " << (void*)&c << std::endl;
}