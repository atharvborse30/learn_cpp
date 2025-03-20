// Anything that starts with a '#'
// is part of the preprocessor
#include <iostream>
//needs c++ 20 for this feature
#include <source_location>


#ifndef PI
    #define PI 3.1315926
#endif

//constexpr float PI = 3.1415926;
// 'preferred style
#define DEBUG 1

#define LOG(param) std::cout << "LOG: " \
                             << #param; \
                             param;     \
                             std::cout << std::endl;

int add(int a, int b){
    //debug your program
    //std::cout << __LINE__ << ':' << __FILE__ << std::endl;

    //needs c++20
    std::source_location location=std::souce_location::current();
    std::cout << location.current() << std::endl;
    std::cout << location.line() << std::endl;
    std::cout << location.function_name() << std::endl;

    return a+b;
}

int main() {

    #ifdef DEBUG
        LOG(add(7,2);)
    #else
        add(7,2);
    #endif

    #ifdef PI
        std::cout << PI << std::endl;
    #else
        std::cout << 22.0f/7.0f << "\n";
    #endif

    return 0;
}