#include <iostream>
#include <bit>
#include <format>
#include <cstddef>
#include <cstdint>
#include <bitset>

void DoubleBinaryForm(double d){
    //Type Punning
    //std::byte* b = reinterpret_cast<std::byte*>(&d);
    char* b = reinterpret_cast<char*>(&d);
    for(int i=sizeof(d)-1; i > -1; --i){
        std::cout  << std::format("{:0>8b}",(uint8_t)b[i]) << " ";
        //std::cout << std::bitset<8>(b[i]) << " ";
    }
    std::cout << std::endl;
}

int main() {

    double value = 255.0;

    DoubleBinaryForm(value);

    return 0;
}

// visit : binaryconvert.com