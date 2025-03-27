#include <iostream>
#include <numeric>
#include <vector>

int main(){

    std::vector<int> v {1,2,3,4,5,6,7,8};
    std::vector<int> result{3,3,3,3,3,3,3,3};

    // (1)
    std::cout << std::transform_reduce(v.begin(), v.end(), result.begin(),0) << std::endl;
    
    // (2)
    std::cout << std::transform_reduce(v.begin(), v.end(), 0, std::plus<>(), [](int v){return v *= 3;}) << std::endl;

    // (3)
    std::cout << std::transform_reduce(std::execution::par, v.begin(), v.end(), result.begin(), 0) << std::endl;

    // (4)
    std::cout << std::transform_reduce(std::execution::seq, v.begin(), v.end(), 0, std::plus<>(), [](int v){return v *= 3; }) << std::endl;
    
    return 0;
}