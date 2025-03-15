#include <iostream>
#include <typeinfo>

template <typename T1, size_t N>

void foo(T1 input1){
    for(size_t i=0; i < N; i++) {
        std::cout << typeid(input1).name() << std::endl;
    }
} 

int main(){

    foo<int, 3>(5);
    std::cout << std::endl;
    foo<int, 4>(5);
    std::cout << std::endl;
    foo<int, 5>(5);
}

// visit cppinsights.com and paste this code , you will see that 3 times the templates will get instantiated because we have changed the second parameter (3, 4, 5) 3 times.