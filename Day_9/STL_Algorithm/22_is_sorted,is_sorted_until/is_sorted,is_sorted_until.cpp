#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <array>

int main(){

    //constexpr std::array<int,7> v1{1,4,7,9,10,11,-11};
    std::vector<int> v1{1,4,7,9,10,11,11};
    std::vector<int> v2{1,4,7,9,10,-11};

    //static_assert(std::is_sorted(v1.begin(), v1.end()), "v1 is not sorted");

    std::cout << std::is_sorted(v1.begin(), v1.end()) << std::endl;
    std::cout << std::is_sorted(v2.begin(), v2.end()) << std::endl;

    auto it = std::is_sorted_until(v2.begin(), v2.end());
    std::cout << "sorted_until: " << *it << std::endl;
    return 0;
}