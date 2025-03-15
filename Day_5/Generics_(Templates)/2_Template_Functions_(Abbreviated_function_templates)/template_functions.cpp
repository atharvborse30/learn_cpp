#include <iostream>

template <typename T>

T square(T input){
    return input*input;
}

auto square2(auto input) {
    return input*input;
}

int main(){

    // explicit conversion of templates , by putting the data type we want
    std::cout << square<int>(5) << std::endl;
    std::cout << square2(5) << std::endl;
}

// visit cppinsigths and copy paste this code and try to understand the code generated for this.