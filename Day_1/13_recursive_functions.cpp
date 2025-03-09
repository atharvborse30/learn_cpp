#include <iostream>

/*
Recursion is supported in c++ but we don't have unlimited space to make function calls
*/

int countdown(int number) {
    // 1. Base case
    if(number==0) {
        std::cout << "0...Take Off!!!" << std::endl;
        return 0;
    }

    // Recursive case
    std::cout << number << std::endl;
    return countdown(number-1);
}

int main() {
    
    countdown(5);
    //countdown(50000000); // will return segmentation fault bcz of stack overflow problem

    return 0;
}