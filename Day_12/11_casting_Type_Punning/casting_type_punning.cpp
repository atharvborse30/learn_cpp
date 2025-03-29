#include <iostream>
#include <format>
#include <cstdint> // fixed width types
#include <cstddef> // std::byte

int main(){

    //unsigned int data = 255;

    //std::cout << std::format("{:0>32b}", data) << std::endl;

    // another example that more clearly shows the bytes
    unsigned int data = 0xFF'00'FF'00;
    std::cout << std::format("{:0>32b}", data) << std::endl << std::endl;

    // Type Punning
    // allows us to access data using a different type
    // recommendation to use a modern c++ style cast to do
    // this style of type-punning
    uint8_t* byte = reinterpret_cast<uint8_t*>(&data);
    std::cout << std::format("{:0>8b}", byte[0]) << std::endl;
    std::cout << std::format("{:0>8b}", byte[1]) << std::endl;
    std::cout << std::format("{:0>8b}", byte[2]) << std::endl;
    std::cout << std::format("{:0>8b}", byte[3]) << std::endl;

    std::cout << std::endl;
    // one small improvement to show intention
    //std::byte
    std::byte* byte2 = reinterpret_cast<std::byte*>(&data);
    std::cout << std::format("{:0>8b}", (uint8_t)byte2[0]) << std::endl;
    std::cout << std::format("{:0>8b}", (uint8_t)byte2[1]) << std::endl;
    std::cout << std::format("{:0>8b}", (uint8_t)byte2[2]) << std::endl;
    std::cout << std::format("{:0>8b}", (uint8_t)byte2[3]) << std::endl;


    return 0;
}