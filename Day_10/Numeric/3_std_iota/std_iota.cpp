#include <iostream>
#include <numeric>
#include <vector>

// iota : fills a range with successive increments of the starting value
// iota fills the range [first, last] with sequentially increasing values, starting with value and repetitively evaluating ++value.

std::vector<int> range(int start, int end){
    // Assume end > start
    std::vector<int> result(end-start);
    std::iota(result.begin(), result.end(), start);

    return result;
}

int main(){

    std::vector<int> v(10);
    std::iota(v.begin(), v.end(), 0);

    for(auto elem : range(5,9)){
        std::cout << elem << std::endl;
    }

    // for(auto elem : v){
    //     std::cout << elem << std::endl;
    // }

    return 0;
}