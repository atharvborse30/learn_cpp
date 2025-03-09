#include <iostream>
#include <numeric>
#include <iterator>

// Use of iota

int main() {
    // we decide the size of our array at compile time
    int ids[100];

    //if we use below line
    //ids[10000] = 9;
    //we will get segmentation fault (core dumped) this is bcz we are trying to access something which out of bounds of array.
    //so for that we will use standard array container std::array to handle error and use efficiently in next program.

    std::iota(std::begin(ids), std::end(ids), 0);

    for(int i=0; i<100; i++){
        std::cout << ids[i] << std::endl;
    }

    return 0;
}