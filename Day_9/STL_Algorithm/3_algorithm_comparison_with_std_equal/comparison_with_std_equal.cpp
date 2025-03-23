#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

void test0(){

    std::vector<int> v1{1,2,3};
    std::vector<int> v2{1, 2,3};

    bool result = std::equal(v1.begin(), v1.end(), v2.begin(),v2.end());

    std::cout << "is equal? " << result << std::endl;
}

void test1(){

    std::vector<int> v1{2,3};
    std::vector<int> v2{1, 2,3};

    bool result = std::equal(v1.begin(), v1.end(), v2.begin()+1,v2.end());

    std::cout << "is equal? " << result << std::endl;
}

void test2(){

    std::vector<int> v1{1,2,3};
    std::vector<int> v2{1, 2,3};

    bool result = std::equal(v1.begin(), v1.end(), v2.begin(),v2.end(), [](int i,int j){
        return i==j;
    });

    std::cout << "is equal? " << result << std::endl;
}

// example where the string comparison is not case-sensitive
void test3(){

    std::string s1 = "hello";
    std::string s2  = "HELLO";

    bool result = std::equal(s1.begin(), s1.end(), s2.begin(),s2.end(), [](char i,char j){
        return toupper(i)==toupper(j);
    });

    std::cout << "is equal? " << result << std::endl;
}

int main(){

    // test0();
    // test1();
    // test2();
    test3();
    

    return 0;
}