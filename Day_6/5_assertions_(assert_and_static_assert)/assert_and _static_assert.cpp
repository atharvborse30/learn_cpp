#include <iostream>
#include <cassert>

constexpr int add(int a,int b){
    return a+b;
}

void checkAge(int inputAge){
    assert(inputAge > 0 && "age was less than 0");
}

int main() {

    static_assert(add(2,2)==4, "2+2 = 4");

    constexpr int age = 7;
    //checkAge(age);
    static_assert(age>0, "message");
    static_assert(sizeof(int)==4, "int is 4 bytes");

    return 0;
}

// assertions are great way to add error checking in your code at runtime, documentation