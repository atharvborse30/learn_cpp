#include <iostream>

// pass by value "arguments"
// makes copies of our arguments when passed in functions

void setValue(int arg) {
    std::cout << "arg's addr is: " << &arg << std::endl;
    std::cout << "arg's initial value is : " << arg << std::endl;
    arg = 999;

    std::cout << "arg's changed value is : " << arg << std::endl;
}

int main() {

    int x = 42;
    std::cout << "x's value is : " << x << std::endl;
    std::cout << "x's addr is : " << &x << std::endl;

    //Call our function
    setValue(x);

    //Check x's value
    std::cout << "x's value is : " << x << std::endl;
    std::cout << "x's addr is : " << &x << std::endl;

    return 0;
}