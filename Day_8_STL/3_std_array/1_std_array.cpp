#include <iostream>
#include <array>
#include <algorithm>

void PrintArray(std::array<int, 5> param){
    std::cout << param.size() << std::endl;
    std::cout << sizeof(param) << std::endl;
}

void legacyCCodeBase(int* elem, int size){

}

int main(){
    std::array<int,5> arr = {11,2,8,4,5};
    std::sort(arr.begin(), arr.end());

    std::cout << "arr max size : " << arr.max_size() << std::endl;

    //std::array<int,5> data;
    //data.fill(1);
    std::cout << "data at 4 index: " << arr.at(4) << std::endl;
    std::cout << "data at index 1 using access operator: " << arr[1] << std::endl;

    for(const auto& elem : arr) {
        std::cout << elem << std::endl;
    }

    std::cout << "sizeof data : " << sizeof(arr) << std::endl;
    PrintArray(arr);

    legacyCCodeBase(arr.data(), arr.size());

    return 0;
}