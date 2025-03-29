#include <iostream>
#include <string>

int main(){

    std::string shader= " \
       void main()        \
       ";

    std::cout << shader << std::endl;

    // raw string literals
    std::string shader2(R"(
        void main(){

        }
    )");
    std::cout << shader2 << std::endl;
}