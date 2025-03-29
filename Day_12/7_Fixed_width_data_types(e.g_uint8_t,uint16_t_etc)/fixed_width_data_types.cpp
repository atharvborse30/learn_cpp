#include <iostream>
#include <cstdint>

int main() {

    static_assert(sizeof(int)==4, "must be a 32 bit architecture");
    static_assert(sizeof(int32_t)==4, "needs a 32 bit architecture");
    static_assert(sizeof(int32_t)==sizeof(int), "I wanted to safely assume a int is always 4 bytes, but i was wrong");

    int primitive_int = 5;
    int32_t primitive_int = 7;

    // when to use fixed-types ?
    // when i definitely know the range -- example
    // Pixels
    // have each component of a pixel (red, green, blue, alpha) from a range of 0 to 255
    uint8_t red = 255;
    uint8_t blue = 5;
    uint8_t green = 0;
    uint8_t alpha = 127;

    std::cout << "uint8_t min: " << 0 << std::endl;
    std::cout << "uint8_t max: " << UINT8_MAX << std::endl;
    std::cout << (short)red << "," << (short)green << "," << (short)blue << "," << (short)alpha << std::endl;

    return 0;
}