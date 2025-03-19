#include <iostream>
#include <vector>
#include <algorithm>

struct Value{
    int m_result1{0};
    float m_result2{0};

    int operator()(int newResult){
        m_result1 = newResult;
        return newResult;
    }

    float operator()(float newResult2){
        m_result2 = newResult2;
        return newResult2;
    }
};

int main(){
    Value v;
    v(42);
    v(42.7f);
    std::cout << v.m_result1 << std::endl;
    std::cout << v.m_result2 << std::endl;

    return 0;
}