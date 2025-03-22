/*
    std::unordered_set = internally the elements are not sorted in any particular order, but organized into buckets.

    Unordered set is an associative container that contains a set of unique objects of type Key. 

    Search, insertion, and removal have average constant-time complexity.
*/

// works with c++20 compiler
// run the cmd:- g++ -std=c++20 1_std_unordered_set.cpp -o 1_std_unordered_set && 1_std_unordered_set

#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <iterator>

void printUnorderedSet(const std::unordered_set<int> &set){
    for(const auto& elem : set){
        std::cout << elem << ",";
    }
    std::cout << std::endl;
}

int gen(){
    static int i = 0;
    return ++i;
}

int main() {

    std::unordered_set<int> s{1,2,3,4,5,6};
    std::unordered_set<int> s2;

    std::generate_n(std::inserter(s2,s2.begin()),10,gen); // call this function 10 times

    s.merge(s2);
    if(s.erase(11)==1){
        std::cout << "we removed 11\n";
    }

    //s.reserve(5);

    if(!s.contains(12)){
        s.insert(12);
    } 

    std::cout << s.bucket_count() << std::endl;
    std::cout << s.load_factor() << std::endl;

    printUnorderedSet(s);

    std::cout << std::endl;

    // Printing out bucket sizes
    // for(int i=0; i<s.bucket_count(); i++){
    //     std::cout << s.bucket_size(i) << std::endl;
    // }

    return 0;
}