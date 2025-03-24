// Lerp : "linear Interpolation"

/*
    A = 10
    B = 110
    t = 0.5f

    10 + 0.5(110-10)
    A  + t  ( B - A )
*/

#include <iostream>
#include <cmath> // std::lerp

// Custom lerp function
float lerp(float a, float b, float t) {
    return a + t * (b - a);
}

int main() {
    // Using the custom lerp function
    std::cout << "Custom lerp:" << std::endl;
    std::cout << lerp(10.0f, 110.0f, 0.5f) << std::endl;
    std::cout << lerp(0.0f, 1.0f, 1.0f) << std::endl;
    std::cout << lerp(10000.0f, 1.0f, 0.0f) << std::endl;

    std::cout << std::endl;

    // Using the C++17 standard std::lerp function
    std::cout << "std::lerp:" << std::endl;
    std::cout << std::lerp(10.0f, 110.0f, 0.5f) << std::endl;
    std::cout << std::lerp(0.0f, 1.0f, 1.0f) << std::endl;
    std::cout << std::lerp(10000.0f, 1.0f, 0.0f) << std::endl;

    return 0;
}
