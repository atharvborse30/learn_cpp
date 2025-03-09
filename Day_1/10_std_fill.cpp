#include <iostream>
#include <array>
#include <algorithm>

int main() {

    std::array<int, 3> myArray;

    std::fill(std::begin(myArray), std::end(myArray), 1024);

    for(int element : myArray) {
        std::cout << element << std::endl;
    }

    return 0;
}