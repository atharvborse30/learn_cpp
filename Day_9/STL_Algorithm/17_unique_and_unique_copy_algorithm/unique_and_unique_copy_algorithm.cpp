#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(){

    //lambda to quickly print out collection
    auto print_c = [](const auto& c, const char* msg){
        std::cout << msg << ":";
        for(auto elem : c){
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    };

    std::vector v{1,1,2,2,3,3,4,4,4,4,5};
    print_c(v, "original: ");

    //auto last = std::unique(v.begin(), v.end());
    //v.erase(last, v.end());
    v.erase(std::unique(v.begin(), v.end()), v.end());
    print_c(v, "unique  : ");


    std::string s = "Hello friends     !!!";
    std::string out;
    std::unique_copy(begin(s), end(s), std::back_inserter(out), [](char c1, char c2){
        if(c1 == ' ' && c2 == ' '){
            return true;
        } else{
            return false;
        }
    });
    std::cout << "original string: " << s << "\n";
    std::cout << "out string :" << out << std::endl;

    return 0;
}