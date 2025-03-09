#include <iostream>

int main() {
    std::cout << "Hello World!" << std::endl;

    return 0;
}

// if we make some errors and run the program we sometimes get errors and warnings. so we have to remember that warning are also errors 
// so in the terminal we will write the command to treat warnings as errors -
// for ex-  g++ -Werror 1_hello_world.cpp -o 1_hello_world && 1_hello_world