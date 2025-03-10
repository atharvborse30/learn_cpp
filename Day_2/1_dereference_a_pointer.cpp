#include <iostream>

int main() {
    
    int x = 7;
    int* px = &x;

    //what happens if I dereference 'px' ?
    // That is, what will 'x store' ?
    *px = 42;

    std::cout << "x stores   : " << x << std::endl;

    /*
    here *px will store the address of x, after that *px will change the value from address to 42.
    */

    return 0;
}