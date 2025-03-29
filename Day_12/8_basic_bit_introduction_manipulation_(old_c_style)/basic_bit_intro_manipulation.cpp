#include <iostream>
#include <cstdint>
#include <format>

int main(){

    int8_t value1 = 16;
    int8_t value2 = 0b0000'0111;

    std::cout << "value1: " << std::hex << (int)value1 << std::endl;
    std::cout << "value2: " << std::format("{:b}", value2) << std::endl;

    value2 = value2 << 3;
    std::cout << "value2(bin): " << std::format("{:b}", value2) << std::endl;
    std::cout << "value2(dec): " << std::dec << (int)value2 << std::endl;

    value2 >>= 3;
    std::cout << "value2(bin): " << std::format("{:b}", value2) << std::endl;
    std::cout << "value2(dec): " << std::dec << (int)value2 << std::endl;

    value2 >>= 1;
    std::cout << "value2(bin): " << std::format("{:b}", value2) << std::endl;
    std::cout << "value2(dec): " << std::dec << (int)value2 << std::endl;

    // 1. Bit packing
    //           r   g  b  a   (8 bits each for each component)
    int pixel = 0xFF'EE'00'BB;
    //              >> 24 bits
    uint8_t r = pixel >> 24;
    uint8_t g = pixel >> 16;
    uint8_t b = pixel >> 8;
    uint8_t a = pixel >> 0;

    std::cout << std::hex << "r:" << static_cast<int>(r) << " " 
                          << "g:" << static_cast<int>(g) << " " 
                          << "b:" << static_cast<int>(b) << " " 
                          << "a:" << static_cast<int>(a) << std::endl;

    // 2. Bit masking
    int mask = 0xFF'EE'00'BB;
    int filter = pixel & mask;
    uint8_t r2 = filter >> 24;
    uint8_t g2 = filter >> 16;
    uint8_t b2 = filter >> 8;
    uint8_t a2 = filter >> 0;
    std::cout << std::hex << "r:" << static_cast<int>(r2) << " " 
                          << "g:" << static_cast<int>(g2) << " " 
                          << "b:" << static_cast<int>(b2) << " " 
                          << "a:" << static_cast<int>(a2) << std::endl;
}

/*
    run with this command :-
    g++ -std=c++23 basic_bit_intro_manipulation.cpp -o basic_bit_intro_manipulation && basic_bit_intro_manipulation
*/