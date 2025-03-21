// topics covered in this program
// std::string, char*, const char*, string literals

#include <iostream>
#include <string>

// keep in mind ,passing strings by 
// const reference if they are not changing
void PrintString(const std::string& s){
    std::cout << s << std::endl;
}

int main(){

    std::string s("mike");
    s[0] = 'M';
    std::cout << s << std::endl;

    s += "aeiou";
    std::cout << s.size() << std::endl;
    s.shrink_to_fit();
    std::cout << s.capacity() << std::endl;
    std::cout << std::endl;
    PrintString(s);

    std::cout << std::endl;
    std::cout << &s << std::endl;
    std::cout << s.c_str() << std::endl;

    for(auto element : s){
        std::cout << element << std::endl;
    }

    std::cout << std::endl;

    if(s.find('z') == std::string::npos){
        std::cout << "did not found z";
    } else
    {
        std::cout << "found z";
    }
    std::cout << std::endl;
    std::cout << s.find('i') << std::endl;
    return 0;
}