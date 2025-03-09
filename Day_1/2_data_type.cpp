#include <iostream>
#include <string>

int main() {

    int64_t x = 422359870235;
    std::cout << x << std::endl;
    std::cout << sizeof(x) << std::endl << std::endl;

    float f = 42.2359870235;
    std::cout << f << std::endl;
    std::cout << sizeof(f) << std::endl << std::endl;

    bool b = true;
    std::cout << b << std::endl;
    std::cout << sizeof(b) << std::endl << std::endl;

    char c = 'a';
    std::cout << c << std::endl;
    std::cout << sizeof(c) << std::endl << std::endl;

    // remember string here is not a fundamental type in c++

    std::string s = "abc";
    std::cout << s << std::endl;
    std::cout << sizeof(s) << std::endl << std::endl;


    return 0;
}