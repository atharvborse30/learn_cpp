#include <string>
#include <vector>
#include "IntArray.hpp"

int main() {

    IntArray array1("array1");

    // copy made
    IntArray array2 = array1;

    std::vector<IntArray> myArrays;
    myArrays.reserve(10);
    for(int i=0; i<10; i++) {
        IntArray temp(std::to_string(i));  //constructing a new object here
        myArrays.push_back(std::move(temp));   // pushing back the object here
    } 

    return 0;
}