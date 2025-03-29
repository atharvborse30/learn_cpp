#include <iostream>
#include <print>

// C++11 'constexpr'
// May evaluate at compile-time or run-time
//(also nothing to do with making the variable/function 'const')
constexpr auto add(int a,int b){
    return a+b;
}

// C++20 'consteval'
// Must evaluate at compile-time
// can work with constexpr as long as that constexpr thing
// evaluated at compile-time
// does not have anything to do with making the resulting
// variable that stores the 'consteval function' result immutable
consteval auto add_ctfe(int a,int b){
    return a+b;
}

int main(){

    int n=7;
    auto result1 = add(4,5);
    auto result2 = add(4,n);
    std::cout << "result1: " << result1 << std::endl;
    std::cout << "result2: " << result2 << std::endl;

    const int m=7;
    auto result3 = add_ctfe(4,5);
    auto result4 = add_ctfe(4,m);
    auto result5 = add_ctfe(4,add(4,5));

    result5++;

    std::cout << "result3: " << result3 << std::endl;
    std::cout << "result4: " << result4 << std::endl;
    std::cout << "result5: " << result5 << std::endl;

    return 0;
}