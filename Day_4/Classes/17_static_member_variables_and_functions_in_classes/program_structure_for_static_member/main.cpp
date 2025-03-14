#include <iostream>
#include "static_member.hpp"

int main() {

    //API instance
    //instance.MAJOR = 7;
    std::cout << "MAJOR: " << API::MAJOR << "\n";
    std::cout << "MAJOR: " << API::GetMajorVersion() << "\n";

    return 0;
}