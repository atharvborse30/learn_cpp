#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main(){

    std::string s{"atharv"};
    std::string out;

    // sometimes we want to do things in-place  ,or
    // sometimes we want a copy of our data.
    std::transform(s.cbegin(), s.cend(), std::back_inserter(out), [](unsigned char c){
        return std::toupper(c);
    });

    std::cout << "s   : " << s << std::endl;
    std::cout << "out : " << out << std::endl;

    return 0;
}