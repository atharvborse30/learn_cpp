#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <iterator>

int main() {

    std::vector<int> vec{1,2,3,4,5,6};

    // Raw loop
    for(size_t i=0; i < vec.size(); ++i) {
        std::cout << vec[i] << ",";
    }
    std::cout << std::endl;

    // Iterator form
    // Iterators are a behavioral design pattern
    // describing how to move through a collection.
    // they show 'intent' for how to move through a 
    // data structure more clearly
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it){
        std::cout << *it << ",";
    }
    std::cout << std::endl;

    //Typically a good use for 'auto'
    for(auto it = vec.begin(); it != vec.end(); ++it){
        std::cout << *it << ",";
    }
    std::cout << std::endl;

    //Range-based for-loop
    for(auto& e : vec){
        std::cout << e << ",";
    }
    std::cout << std::endl;

    // use of advance
    auto it = vec.begin();
    std::cout <<  "use of advance and distance: \n";
    for(std::advance(it,2); it != vec.end(); ++it){
        std::cout << "elements to look at: "<< std::distance(it, vec.end()) << " - ";
        std::cout << *it << std::endl;
    } 
    std::cout << std::endl;


    // Key/value pair of strings and integers
    std::unordered_map<std::string, int> umap{{"one", 1},{"two",2},{"three",3}};
    for(auto& e : umap){
        std::cout << e.first << " - " << e.second << std::endl;
    }
    

}