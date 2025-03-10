#include <iostream>
#include <vector>

int main() {
    //Local variable (primitive type)
    int x = 7;
    
    // a pointer
    int* px = &x;

    // a STACK allocated array
    int array[] = {1,3,5,7,9};

    // a HEAP allocated array
    int* dynamicallyAllocatedArray = new int[1000];

    std::vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);


    // Output
    std::cout << "x                           : " << sizeof(x) << std::endl;
    std::cout << "px                          : " << sizeof(px) << std::endl;
    std::cout << "array                       : " << sizeof(array) << std::endl;
    std::cout << "dynamicallyAllocatedArray   : " << sizeof(dynamicallyAllocatedArray) << std::endl;
    std::cout << "v                           : " << sizeof(v) << std::endl;

    return 0;
}