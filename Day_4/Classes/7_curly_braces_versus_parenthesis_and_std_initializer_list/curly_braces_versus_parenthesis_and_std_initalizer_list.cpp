#include <iostream>
#include <vector>

int main(){

    //three different ways to initialize the variables
    // int a = 4;
    // int b(4);
    // int c{4};

    std::vector<int> v{1,2,3}; // this is done using initializer list
    // cannot use std::vector<int> v(1,2,3); will throw error
    // also harmful to use std::vector<int> v(10,1); will give print as 1 10times
    // so always use curly braces while working with objects.
    for(auto& i : v){
        std::cout << i << "\n";
    }

    return 0;
}

// for your reference visit : google.github.io/styleguide/cppguide.html

// so for that you can also use std::initializer_list standard library
// visit cppreference.com/w/cpp/utility/initializer_list