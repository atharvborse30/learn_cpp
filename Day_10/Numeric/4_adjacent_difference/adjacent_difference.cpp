#include <iostream>
#include <numeric>
#include <vector>

// adjacent_difference : computes the differences b/w adjacent elements in a range

int main() {

    std::vector v{7,5,1,3,9,2};
    std::vector<int> result;
    std::adjacent_difference(v.begin(), v.end(),std::back_inserter(result));

    for(auto elem : result){
        std::cout << elem << ",";
    }
    std::cout << std::endl;

    // auto minimum = std::min_element(result.begin(), result.end());
    // std::cout << "minimum adjacent_difference is: " << *minimum << std::endl;


    // equivalent to above
    // std::adjacent_difference(v.begin(), v.end(),v.begin());
    // for(auto elem : v){
    //     std::cout << elem << ",";
    // }
    // std::cout << std::endl;

    return 0;
}