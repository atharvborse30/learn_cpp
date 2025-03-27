#include <iostream>
#include <format>
#include <string>

int main(){

    // old c++ c-style way , which is not type safe
    // int integer{72};
    // std::printf("integer is %d\n", integer);

    // more verbose (and potentially more expensive) way
    // of outputting text
    std::cout << "integer is " << integer << std::endl;

    std::cout << std::format("Like & subscribe to {}", "Atharv" ) << std::endl;

    // position arguments using numbers
    int month = 6;
    int year = 2025;
    std::cout << std::format("It is now {}-{}", month, year) << std::endl;
    // flipped the order 
    std::cout << std::format("It is now {1}-{0}", month, year) << std::endl;

    //Reusability of 'text formatting strings'
    constexpr const char* myFormat = "learning cpp {}"
    std::cout << std::format(myFormat, "Atharv") << std::endl;

    int a = 8;
    auto s0 = std::format("{:5}", a);
    auto s1 = std::format("{:6}", a);
    auto s2 = std::format("{:*<6}", a);
    auto s3 = std::format("{:_>6}", a);
    auto s4 = std::format("{:=^6}", a);
    
    std::cout << s0 << std::endl;
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::cout << s3 << std::endl;
    std::cout << s4 << std::endl;

    // can print out twice using the positional formatting
    auto s5 = std::format("default: {0}, {0:=^+6}", a);
    std::cout << s5 << std::endl;

    // Precision and width of the result
    float f = 3.141526;
    auto s6 = std::format("default: {0}, {0:10.5f}", a);
    std::cout << s6 << std::endl;

    int binary = 7;
    std::cout << &binary << std::endl;
    auto s7 = std::format("default: {0}, {0:b}", binary);
    std::cout << s7 << std::endl;

    auto s8 = std::format("default: {0}, {0:0>8}", binary);
    std:cout << s8 << std::endl;

    auto s9 = std::format("default: {0}, {0:0>8X}", binary);
    std:cout << s9 << std::endl;

    constexpr const char* formatAddress = "value: {0}, address: {1:p}";
    std::cout << std::format(formatAddress, binary,static_cast<void*>&binary) << std::endl;

    return 0;
}