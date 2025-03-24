#include <iostream>
#include <limits>
#include <numeric>

int midpoint(int a, int b){
    return (a+b)/2;
}

// float midpoint(float a, float b){
//     return (a+b)/2;
// }

/* a bit tricky to get argument correct
template <class T, class T2>
T2 midpoint(T a, T2 b){
    return (a+b)/2;
} 
*/

int main(){

    std::cout << midpoint(4,1) << std::endl;
    std::cout << midpoint(1,4) << std::endl;
    std::cout << std::midpoint(4,1) << std::endl;
    std::cout << std::midpoint(1,4) << std::endl;
    std::cout << std::endl;

    int a = std::numeric_limits<int>::max()-1;
    int b = std::numeric_limits<int>::max()-1;

    std::cout << "a is: " << a << std::endl;
    std::cout << midpoint(a,b) << std::endl;
    std::cout << std::midpoint(a,b) << std::endl;

    const char* name = "atharv borse";
    const char* p = name+3;
    const char* q = name+5;
    std::cout << std::midpoint(p,q) << std::endl;

    return 0;
}

//run:- g++ -std=c++20 std_midpoint.cpp -o std_midpoint && std_midpoint