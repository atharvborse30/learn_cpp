#include <iostream>
#include "pimpl.hpp"

/*
    having a pointer to implementation is a great way to make a more stable
    code base in an api that doesn't expose all the details to your client, 
    this is how we can actually hide some information private itself just restricts
    access as far as our ability to call particular functions or variables, but this 
    actually hides the information and compiled code as this is in the c++ file
*/

int main() {

    Person atharv("atharv");
    std::cout << atharv.GetAttributes() << std::endl;

    return 0;
}

