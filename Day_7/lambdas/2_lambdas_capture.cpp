#include <iostream>
#include <vector>
#include <algorithm>

// syntax : [ capture ] ( params ) { body }

int main() {

    std::vector<int> v{1,3,2,5,9};

    int lastResult = -1;
    int lastResult2 = -1;

    auto print_v = [&](int n){ lastResult=n; lastResult2=n; std::cout << n << ","; };

    std::for_each(begin(v), end(v), print_v);

    std::cout << '\n' << lastResult << std::endl;
    std::cout << '\n' << lastResult2 << std::endl;

    return 0;
}