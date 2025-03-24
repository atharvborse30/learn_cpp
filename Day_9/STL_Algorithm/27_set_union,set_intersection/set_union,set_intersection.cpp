#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

int main(){

    // CTAD
    std::vector v1{1,3,5,5,5,7,9};
    std::vector v2{2,4,6,5,5};
    std::sort(v1.begin(), v1.end());
    std::sort(v2.begin(),v2.end());
    std::list<int> output;
    std::list<int> output2;

    std::set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), std::back_inserter(output));

    for(auto elem : output){
        std::cout << elem << ",";
    }
    std::cout << std::endl;

    std::set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), std::back_inserter(output2));

    for(auto elem : output2){
        std::cout << elem << ",";
    }
    std::cout << std::endl;

    

    return 0;
}