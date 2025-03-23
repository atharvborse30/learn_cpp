#include <iostream>
#include <algorithm>
#include <vector>

void misMatchTest(const std::vector<int>& v1, const std::vector<int>& v2) {

    // we need the sizes to match
    if(v1.size() != v2.size()){
        return;
    }

    auto result1 = std::mismatch(v1.begin(), v1.end(), v2.begin());
    if(*result1.first == *result1.second){
        std::cout << "no mismatch found\n";
    }
    std::cout << *result1.first << std::endl;
    std::cout << *result1.second << std::endl;


}

int main() {

    std::vector v1{1,2,3,4};
    std::vector v2{1,3,4};
    std::vector v3{1,17,3,4};

    misMatchTest(v1,v2);
    misMatchTest(v1,v3);

    return 0;
}