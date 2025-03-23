#include <iostream>
#include <vector>
#include <algorithm>
#include <forward_list>

int g(int i) {
    return i*2;
}

int main(){

    // Helper lambda to print things
    auto print = [](const std::vector<int>& v){
        for(auto elem : v){
        std::cout << elem << std::endl;
        }
    };

    std::vector<int> ints(10);

    std::fill(begin(ints), end(ints), 1);

    std::generate_n(begin(ints)+5, 5, [n=0]() mutable { return n++; });

    print(ints);

    std::cout << "=======================\n";
    //std::reverse_copy(begin(ints),end(ints));
    std::vector<int> target(ints.size()); // 'sink' or 'destination'
    std::reverse_copy(begin(ints),end(ints), begin(target));

    //print(ints);
    // Let's print out our 'target' which has the reversed vector
    print(target);

    
}