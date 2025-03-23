#include <iostream>
#include <vector>
#include <algorithm>
#include <forward_list>

int main(){

    std::forward_list<int> ints(10);
    std::fill(begin(ints),end(ints), 9);
    std::fill_n(begin(ints),5,0);

    // ints.reserve(100);
    // for(size_t i=0; i< ints.size(); ++i){
    //     ints.push_back(0);
    // }

    for(auto elem : ints){
        std::cout << elem << std::endl;
    }

    return 0;
}