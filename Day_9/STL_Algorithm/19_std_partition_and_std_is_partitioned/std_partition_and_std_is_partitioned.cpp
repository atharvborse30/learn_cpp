#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(){

    std::vector v1{1,3,5,7};
    std::vector v2{1,7,5,3};

    auto predicate = [](int i) { return i < 4; };

    auto v1_test = std::is_partitioned(v1.begin(), v1.end(), predicate);
    auto v2_test = std::is_partitioned(v2.begin(), v2.end(), predicate);

    std::cout.setf(std::ios_base::boolalpha);
    std::cout << v1_test << std::endl;
    std::cout << v2_test << std::endl;

    auto it2 = std::partition(v2.begin(), v2.end(), predicate);
    for(auto elem : v2){
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    v2_test = std::is_partitioned(v2.begin(), v2.end(), predicate);
    std::cout << v2_test << std::endl;
    

    return 0;
}