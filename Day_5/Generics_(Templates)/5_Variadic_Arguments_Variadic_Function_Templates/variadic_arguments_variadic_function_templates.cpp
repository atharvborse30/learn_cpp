#include <iostream>

template<typename T>

T Sum(T arg){
    return arg;
}

template<typename T, typename... Args>
T Sum(T start, Args... args){
    return start + Sum(args...);
}

int main(){

    std::cout << Sum<double, double>(1,1,3.7,4,5) << std::endl;

    return 0;
}

// visit cppinsights and copy paste these code to understand more on variadic function's working