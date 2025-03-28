#include <iostream>
#include <print>
#include <string>

int main(){

    /*
    int x;
    std::cin >> x;
    std::cout << "x is: " << x << std::endl;
    
    int x, y, z;
    std::cin >> x >> y >> z;
    std::println("{} {} {}", x,y,z);
    */

    // In C - we use scanf(&x);
    //std::string line;
    //std::cin >> line;
    //std::cout << "Our line is: " << line << std::endl;

    /*
    int a;
    std::cin.setf(std::ios_base::dec, std::ios_base::basefield);
    std::cout << "Enter a value in dec: ";
    std::cin >> a;
    std::cout << std::hex << "a is: " << a << std::endl;
    */

    std::string line;
    //std::cin >> line;
    std::getline(std::cin, line);
    std::cout << "Our line is: " << line << std::endl;

    return 0;
}