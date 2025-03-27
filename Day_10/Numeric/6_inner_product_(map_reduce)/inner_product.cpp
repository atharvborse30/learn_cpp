#include <iostream>
#include <numeric>
#include <array>
#include <functional>

bool greater(const int a, const int b){
    return a > b;
}   


int main(){

    std::array<int,5 > a{0,1,2,3,4};
    std::array<int,5> b{5,4,2,3,1};

    auto sum_of_products = std::inner_product(a.begin(), a.end(), b.begin(), 0);
    std::cout << "Sum_of_products: " << sum_of_products << std::endl;

    int accumulator = 0;
    for(size_t i=0; i != a.size(); ++i){
        accumulator += a[i]*b[i];
    }
    std::cout << "manual accumulator: " << accumulator << std::endl;

    auto sum_of_products2 = std::inner_product(a.begin(), a.end(), b.begin(), 0, std::plus<>(), std::multiplies<>());
    std::cout << "Sum_of_products2: " << sum_of_products2 << std::endl;

    auto matches = std::inner_product(a.begin(), a.end(), b.begin(), 0, std::plus<>(), std::equal_to<>());
    std::cout << "matches: " << matches << std::endl;

    auto greater_value = std::inner_product(a.begin(), a.end(), b.begin(), 0, std::plus<>(), std::greater<>());
    std::cout << "greater values: " << matches << std::endl;

    // greater value lambda implementation
    auto greater_equal_lambda = std::inner_product(a.begin(), a.end(), b.begin(), 0, std::plus<>(),[](auto a, auto b){
        return a>=b;
    });
    std::cout << "greater equal lambda: " << greater_equal_lambda << std::endl;


    return 0;

}