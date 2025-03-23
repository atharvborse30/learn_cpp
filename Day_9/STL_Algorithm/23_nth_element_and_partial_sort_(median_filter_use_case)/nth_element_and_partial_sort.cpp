#include <iostream>
#include <algorithm>
#include <vector>

int main() {

    std::vector<int> v{1,3,5,7,2,4,6,8};
    //sorted           1 2 3 4 5 6 7 8
    //nth element      3 2 1 4 5 6 8 7 

    // median selection
    // auto m = v.begin() + v.size()/2;
    // std::nth_element(v.begin(),m, v.end());

    // largest 3 element
    // partition around the largest element
    auto m = v.begin()+1;
    std::nth_element(v.begin(),m, v.end(), std::greater<int>());
    std::partial_sort(v.begin(), m, v.end(), std::greater<int>());


    std::cout << "largest element: "<< v[0] << std::endl;
    std::cout << "second largest element: "<< v[1] << std::endl;
    std::cout << "third largest element: "<< v[2] << std::endl;

    

    for(auto elem : v){
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}