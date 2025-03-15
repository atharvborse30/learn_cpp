#include <iostream>

template <typename T>

T square(T input){
    return input*input;
}

int main(){
    //implicit conversion of templates, here we don't need to specify data type
    std::cout << square(5) << std::endl;
    std::cout << square(5.5) << std::endl;
    std::cout << square(6.5f) << std::endl;

    std::cout << "\n";

    // explicit conversion of templates , by putting the data type we want
    std::cout << square<int>(5) << std::endl;
    std::cout << square<double>(5.5) << std::endl;
    std::cout << square<float>(6.5f) << std::endl;
}