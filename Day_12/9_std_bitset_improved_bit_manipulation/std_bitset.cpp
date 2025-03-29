#include <iostream>
#include <bitset>
#include <format>
#include <cstdint>
#include <string>

int main(){

    uint8_t bin = 0b1010'1111;

    std::cout << std::format("{:b}", bin) << std::endl;

    std::string bit_mask_string = "1010101010";
    std::bitset<10> bit_mask(bit_mask_string);
    std::bitset<10> bits;
    for(int i=0; i<10; i++){
        bits.set(i, true);
    }

    std::cout << bits.count() << std::endl;

    bits = bits & bit_mask;
    std::cout << bits << std::endl;

    return 0;
}