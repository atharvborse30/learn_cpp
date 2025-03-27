#include <iostream>
#include <numeric>
#include <vector>

void printVector(const std::vector<int>& v){
    for(auto elem : v){
        std::cout << elem << ",";
    }
    std::cout << std::endl;
}

int main() {

    std::vector<int> data{77,2,3,4,5,6,7,8};
    std::vector<int> inclusive_results(8);
    std::vector<int> exclusive_results(8);

    std::inclusive_scan(data.begin(), data.end(), inclusive_results.begin());
    printVector(inclusive_results);

    std::exclusive_scan(data.begin(), data.end(), exclusive_results.begin()1,std::multiplies<>{});
    printVector(exclusive_results);
}
