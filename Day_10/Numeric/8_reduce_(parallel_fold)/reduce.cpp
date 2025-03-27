#include <iostream>
#include <vector>
#include <numeric>
#include <execution>

int main(){

    std::vector<int> v1{1,2,3,4,5,6,7,8};
    std::vector<int> v2{1,2,3,4,5,6,7,8};

    // std::cout << "v1: " << std::reduce(v1.begin(), v1.end()) << std::endl;
    // Generally I recommend having the initial value, and make sure it is the right type!
    std::cout << "v1: " << std::reduce(v1.begin(), v1.end(),0) << std::endl;
    std::cout << "v1(par): " << std::reduce(std::execution::par,v1.begin(), v1.end(),0) << std::endl;

    return 0;
}