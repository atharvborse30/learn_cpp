#include <iostream>
#include <numeric>
#include <iterator>
#include <array>

// array data is stored contiguously
// we decide the size of our array at compile time

int main() {

    // int ids[100];   //Raw array
    std::array<int,100> ids;  //STL

    std::iota(std::begin(ids), std::end(ids), 10);

    // ids.at(1000) = 9;
    //here it will give nicer warning of index value out of range accessing

    ids.at(99) = 9;

    for(int i=0; i<100; i++){
        std::cout << ids[i] << std::endl;
    }

    std::cout << "number at start : ";
    std::cout << ids.front() << std::endl;

    std::cout << "number at last : ";
    std::cout << ids.back() << std::endl;

    return 0;
}