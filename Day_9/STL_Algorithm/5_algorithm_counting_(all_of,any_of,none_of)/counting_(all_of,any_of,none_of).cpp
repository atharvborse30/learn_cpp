#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void test0(){
    std::vector<int> v1{1,3,5,7};

    bool result = std::all_of(v1.cbegin(), v1.cend(), [](int i){
        return i > 0;
    });

    std::cout << "all_of > 0 : " << result << std::endl;
}

void test1(){
    std::vector<int> v1{1,-3,5,7};

    bool result = std::any_of(v1.cbegin(), v1.cend(), [](int i){
        return i > 0;
    });

    std::cout << "any_of > 0 : " << result << std::endl;
}

void test2(){
    std::vector<int> v1{-1,-3,-5,-7};

    bool result = std::none_of(v1.cbegin(), v1.cend(), [](int i){
        return i > 0;
    });

    std::cout << "none_of > 0 : " << result << std::endl;
}

int main(){

    test0();
    test1();
    test2();
    return 0;
}