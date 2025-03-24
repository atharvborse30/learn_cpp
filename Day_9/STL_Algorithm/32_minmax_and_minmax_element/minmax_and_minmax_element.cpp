#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>

int main(){

    std::pair<int,int> s1 = std::minmax(7,2);
    std::pair<int,int> s2 = std::minmax(2,7);
    std::pair<int,int> s3 = std::minmax({1,3,5,7,9,2,4,6,8,10});

    std::cout << s1.first << "," <<s1.second << std::endl;
    std::cout << s2.first  << "," << s2.second << std::endl;
    std::cout << s3.first  << "," << s3.second << std::endl;

    std::vector v{21,1,3,5,7,9,-5,11,13,15,17};
    std::srand(std::time(0));

    const auto [lower_bound, upper_bound] = std::minmax(std::rand() % v.size(), std::rand() % v.size());

    std::cout << lower_bound << "," << upper_bound << std::endl;
    for(size_t idx = lower_bound; idx < upper_bound; idx++){
        std::cout << v[idx] << ",";
    }
    std::cout << std::endl;

    const auto [lower,upper] = std::minmax_element(v.begin(), v.begin() + (std::rand() % v.size()));
    std::cout << *lower << "," << *upper << std::endl;

    return 0;
}