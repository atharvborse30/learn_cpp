#include <iostream>
#include <vector>
#include <algorithm>

// 1. we can mutate data
// 2. efficient

void PassByValue(int arg) {
    arg = 999;
}

void PassByReference(int& alias) {
    std::cout << "alias's addr is  :" << &alias << std::endl;
    alias = 999;
}

void passbyvalue(std::vector<int> arg) {
    arg[0] = 1;
}

void passbyreference(std::vector<int>& alias) {
    alias[0] = 1;
}

int main() {

    int x = 42;
    std::cout << "x's value is : " << x << std::endl;
    std::cout << "x's addr is : " << &x << std::endl;

    //Call our function
    PassByReference(x);

    //Check x's value
    std::cout << "x's value is : " << x << std::endl;
    std::cout << "x's addr is : " << &x << std::endl;

    std::vector<int> y(1000);
    y.reserve(1000);
    std::fill(std::begin(y), std::end(y), 1);

    // passbyvalue(y);
    passbyreference(y);

    return 0;
}