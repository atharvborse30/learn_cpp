// will work on search, find, find_if, adjacent_find

#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    // Find
    //                [-----]
    // std::vector<int> v{1,3,5,7,9};

    // auto result = std::find(v.begin(), v.end(), 3);
    // if(result != v.end()){
    //     std::cout << "found 3" << std::endl;
    // }

    //Find_if
    // std::vector<int> v{1,3,12,5,7,9,10};

    // auto is_even = [](int i) {
    //     return i%2 == 0;
    // };

    // auto result = std::find_if(v.begin(), v.end(), is_even);

    // if(result != v.end()){
    //     std::cout << "could satisy is_even\n";
    //     std::cout << *result << std::endl;
    // }


    // Seach 
    // std::vector<int> v{1,2,3,4,5};
    // std::vector<int> s{2,3,4}; // sequence i'm looking for in my vector v
    // //std::vector<int>::iterator
    // auto result = std::search(v.begin(), v.end(),s.begin(), s.end());

    // if(result != v.end()){
    //     std::cout << "Found our sequence!\n";
    // }


    // Adjacent_find
    std::vector<int> v{1,2,7,3,4,5,9,9,6,7,8};
    auto result = std::adjacent_find(v.begin(), v.end());
    if(result != v.end()){
        std::cout << "Found an adjacent pair!" << *result << std::endl;
        std::cout << "at index: " << std::distance(v.begin(), result) << std::endl;
    }

    return 0;
}