#include <iostream>
#include <variant> // C++ 17 and beyond

union U{
    int i;
    short s;
};

int main() {
    
    std::variant<int, float> data;
    std::cout << "U   : " << sizeof(U) << std::endl;
    std::cout << "data: " << sizeof(data) << std::endl;
    data = 7;
    std::cout << data.index() << std::endl;
    if(auto attemp = std::get_if<float>(&data)){
        std::cout << "found a float" <<std::endl;
    }
    std::cout << get<float>(data) << std::endl;

    return 0;

}