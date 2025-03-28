// std::print - print formatted text  // c++23 syntax

#include <print>
#include <string>

int main(){
    //std::cout << "hello world!" << std::endl;
    //equivalent to above
    std::println("Hello world!");

    std::string name = "atharv";
    std::string msg = "hello";
    std::pritnln("{}, {}!", name, msg);
    //positional arguments
    std::pritnln("{1}, {0}!", name, msg);

    constexpr auto format1 = "{0}, {1}!";
    constexpr auto format2 = "{1:*<20}, {0}!";

    std::println(format1, name, msg);
    std::println(format2, name, msg);
}