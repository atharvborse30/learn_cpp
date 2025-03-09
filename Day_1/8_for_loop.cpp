#include <iostream>
#include <array>

int main() {

    //raw array
    int arr[] = {1,3,5};
    std::cout << "Method 1 :" << std::endl;
    for(int i=0;i<3;i++){
        std::cout << arr[i] << std::endl;
    }

    //std array container
    std::array<int, 3> arr2{1,3,5};
    std::cout << "Method 2 : " <<std::endl;
    for(int i=0; i < arr2.size(); i++) {
        std::cout << arr2[i] << std::endl;
    }


    //range-based for loops
    std::cout << "range based for loop for raw array :" << std::endl;
    for(int element : arr) {
        std::cout << element << std::endl;
    }

    //range-based for loops
    std::cout << "range based for loop for std array :" << std::endl;
    for(auto element : arr2) {  //auto keyword here means that we don't have to deduce what the type is, the compiler will automatically figure it out here
        std::cout << element << std::endl;
    }

    return 0;
}