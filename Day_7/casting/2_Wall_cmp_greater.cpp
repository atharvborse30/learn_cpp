#include <iostream>
#include <utility>

int main() {

    int result = 65;
    unsigned char c = result;
    std::cout << (int)c << std::endl;

    int i = -2;
    unsigned int u = 1;

    if(i>u){
        std::cout << "huh?" << std::endl;
    }
    // if(std::cmp_greater(i,u)){
    //     std::cout << "should not print\n";
    // }

    return 0;
}

// run these cmd as 
// g++ 2_Wall_cmp_greater.cpp -o 2_Wall_cmp_greater -Wall