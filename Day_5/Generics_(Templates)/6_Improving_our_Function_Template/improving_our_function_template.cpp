#include <iostream>

template <typename T1, typename T2>
auto Multiply(const T1& a, const T2& b) -> decltype(a*b){
    return a*b;
}
// here we will get same output if we don't explicitly specify the -> decltype(a*b) as our return typ

int main(){
    std::cout<< Multiply<float, int>(7.22f, 5) << std::endl;

    return 0;
}