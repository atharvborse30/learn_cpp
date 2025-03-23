#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <iterator>
#include <list>

int main(){

    std::vector<int> vec{1,2,3,4,5,6};

    auto it = vec.begin();

    //*it = 5;
    std::cout << *it << std::endl;
    it++;
    std::cout << *it << std::endl;
    //it--;
    it+=3;
    //A[3] === (*A+3)
    std::cout << *it << std::endl;
}