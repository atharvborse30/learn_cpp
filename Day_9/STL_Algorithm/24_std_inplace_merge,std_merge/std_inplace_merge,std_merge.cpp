#include <iostream>
#include <algorithm>
#include <vector>

void printCollection(const std::vector<int>& c){
    for(auto elem : c){
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

// checks if sorted, otherwise, sorts
void check_sort(std::vector<int>& v){
    if(!std::is_sorted(v.begin(), v.end())){
        std::sort(v.begin(), v.end());
    }
}

int main(){

    std::vector<int> v1{1,3,5,7,-5};
    std::vector<int> v2{2,-4,6,-8};
    std::vector<int> result;

    check_sort(v1);
    check_sort(v2);
    std::merge(v1.begin(),v1.end(), v2.begin(), v2.end(), std::back_inserter(result));
    printCollection(v1);
    printCollection(v2);
    printCollection(result);

    std::cout << std::endl;
    /* partial_sort for two halves at a time */
    std::vector<int> v3{5,7,2,  // first half
                        -6,-9,-8};  // second half

    std::partial_sort(begin(v3), begin(v3)+3,end(v3));
    std::partial_sort(begin(v3)+3, begin(v3),end(v3));
    printCollection(v3);
    std::cout << std::endl;


    // inplace merge
    std::vector<int> v4{1,2,3  // first half
                        -3,-2,-1};  // second half
    std::inplace_merge(begin(v4),begin(v4)+3,end(v4));
    printCollection(v4);

    return 0;
}