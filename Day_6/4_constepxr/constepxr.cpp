#include <iostream>

constexpr int add(int a , int b){
    return a+b;
}

int main(){

    constexpr int i = add(7,16); //23
    constexpr float f = 3.141626f * 3.0f;

    return 0;
}

// visit godbolt.org and paste this code to see the assembly level implementation