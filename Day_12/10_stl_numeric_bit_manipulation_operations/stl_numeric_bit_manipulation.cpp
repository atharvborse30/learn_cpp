#include <iostream>
#include <bitset>
#include <bit>
#include <cstdint>

int main(){

    using binary_cast8 = std::bitset<8>;

    // rotation operation
    uint8_t bin = 0b1111'0001;
    std::cout << "original: " << binary_cast8(bin) << std::endl;
    std::cout << "rotl(,1): " << binary_cast8(std::rotl(bin,1)) << std::endl;
    std::cout << "rotr(,1): " << binary_cast8(std::rotr(bin,1)) << std::endl;

    // check if we have a power of 2 - could be usefule for 
    // optimizing multiply/ divide
    uint8_t pow2 = 0b1111'0100;
    uint8_t pow2not = 0b1111'1001;
    std::cout << std::has_single_bit(pow2) << std::endl;
    std::cout << std::has_single_bit(pow2not) << std::endl;

    //std::byteswap
    uint32_t bytes = 0xFF'DD'AA'77;
    std::cout << std::hex << bytes << std::endl;
    std::cout << std::byteswap(bytes) << std::dec << std::endl;

    // endianness
    if constexpr(std::endian::native == std::endian::big){
        std::cout << "Big-endian machine\n";
    }else {
        std::cout << "little-endian machine\n";
    }

    // bit-width
    // unsigned x = 325;
    // UL is for an integral 'unsigned type'
    std::cout << std::bit_width(325UL) << std::endl;


    return 0;
}