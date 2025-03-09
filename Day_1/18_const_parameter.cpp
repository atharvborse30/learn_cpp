#include <iostream>
#include <type_traits>
#include <vector>
#include <algorithm>

// int main() {
//     const int x = 42;
//     std::cout << "x : " << x << std::endl;
//     std::cout << std::is_const_v<int> <<std::endl;
//     std::cout << std::is_const_v<const int> <<std::endl;

//     std::cout << std::is_const<decltype(x)>::value << std::endl;

//     return 0;
// }

void PassByReference(const std::vector<int>& alias) {
    //alias[0] = 1;  //cannot modify because we have declared it as const
}

int main() {
    std::vector<int> x(1000);
    std::fill(std::begin(x), std::end(x), 1);

    //call our function
    PassByReference(x);

    return 0;
}