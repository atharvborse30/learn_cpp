#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <algorithm>
#include <numeric>

void test0(){

    std::vector<int> v1{1,3,5,7,9,11};
    std::vector<int> v1_copy;
    //v1_copy.reserve(v1.size());

    std::copy(v1.rbegin(), v1.rend(), std::back_inserter(v1_copy));

    for(auto& elem : v1_copy){
        std::cout << elem << std::endl;
    }
}

void test1(){
    std::vector<int> v1(10);
    std::iota(v1.begin(), v1.end(), 1);

    std::vector<int> v1_copy;
    v1_copy.reserve(v1.size());

    // std::distance
    std::copy(v1.rbegin(), v1.rend(), std::back_inserter(v1_copy)); 

    for(auto& elem : v1_copy){
        std::cout << elem << std::endl;
    }   

}
int main(){

    test0();
    test1();
    return 0;
}