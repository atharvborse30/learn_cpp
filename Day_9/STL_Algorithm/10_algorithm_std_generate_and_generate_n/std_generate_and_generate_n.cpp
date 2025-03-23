#include <iostream>
#include <vector>
#include <algorithm>
#include <forward_list>

int f(){
    static int i=0;
    return i++;
}

int g(int i){
    return i*2;
}

int main(){

    std::vector<int> ints(10);
    //std::generate(begin(ints), end(ints), f);

    std::generate(begin(ints), end(ints), [n=0]() mutable { return g(n++); });

    std::generate_n(begin(ints), 5, [n=0]() mutable { return n++; });


    // for(size_t i=0; i< 10; ++i){
    //     ints.push_back(i);
    // }

    for(auto elem : ints){
        std::cout << elem << std::endl;
    }

    return 0;
}