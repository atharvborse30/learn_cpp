// iterator invalidation : sometimes our iterators may not be valid or accessing the data structure as we are traversing our data structure

#include <iostream>
#include <vector>
#include <typeinfo>

int main() {

    std::vector<int> vec = {10,20,30,40,50,60};
    std::cout << typeid(vec).name() << std::endl;

    auto end = vec.end();

    // linear search and remove elements safely
    for(auto it = vec.begin(); it != vec.end(); ++it){
        if(*it == 30){
            it = vec.erase(it);
            break;
        }
        std::cout << *it << std::endl;
    }
}