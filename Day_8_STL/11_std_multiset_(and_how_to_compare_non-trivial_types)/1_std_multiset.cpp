// std::multiset is similar to a set, but does allow for duplicates 'count'

#include <iostream>
#include <set> // Multiset part of same header
#include <algorithm>

// Example helper class
struct Custom{
    int field1;
    int field2;

    //Constructor
    Custom(int _field1, int _field2) : field1(_field1), field2(_field2) {}

    // Comparison
    bool operator<(const Custom& rhs) const {
        int lhs_sum = field1+field2;
        int rhs_sum = rhs.field1+rhs.field2;
        return lhs_sum < rhs_sum;
    }

    // Helper function to print
    void print() const{
        std::cout << "(" << field1 << "," << field2 << ") = " << field1+field2 << std::endl;
    }
};

// In the case that you don't have the ability to modify
// the class , write a function
struct compare{
    //Don't forget the 'const' at the end, cannot have 
    // comparison if we modify internals
    constexpr bool operator()(const Custom& lhs, const Custom& rhs) const{
        int lhs_sum = lhs.field1+lhs.field2;
        int rhs_sum = rhs.field1+rhs.field2;
        return lhs_sum < rhs_sum;
    }
};

int main(){

    // std::multiset<int> s{1,3,5,9,9,9};

    // //std::multiset<int>::iterator it = s.find(9);
    // // equivalent to auto it = s.find(9);
    // if(s.contains(9)){
    //     auto it = s.find(9);
    //     s.erase(it); // erase only one specific key found
    //     std::cout << s.count(9) << std::endl;
    // }
    
    // std::cout << s.count(9) << std::endl; 
    // s.erase(9); // will erase every single 9
    // std::cout << s.count(9) << std::endl;


    std::multiset<Custom,compare> multi;

    Custom c0(1,6);
    Custom c1(2,7);
    Custom c2(2,7);
    Custom c3(9,-5);

    multi.insert(c0);
    multi.insert(c1);
    multi.insert(c2);
    multi.insert(c3);

    std::for_each(multi.cbegin(), multi.cend(),[](const Custom& c){
        c.print();
    });

    return 0;
}