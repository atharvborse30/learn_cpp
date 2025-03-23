#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void test0(){
    std::string s1 = "Apple";
    std::string s2 = "microsoft";

    bool result = std::lexicographical_compare(s1.begin(), s1.end(), s2.begin(), s2.end());

    std::cout << "apple comes before microsoft in dictionary? " << result << std::endl;
}

void test1(){
    std::vector v1{2,4,3,8,12};
    std::vector v2{2,4,4,8};

    bool result = std::lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end());

    std::cout << "v1 before v2? " << result << std::endl;
}

int main(){

    test0();
    test1();

    return 0;
}