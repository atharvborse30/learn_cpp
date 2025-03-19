#include <iostream>
#include <vector>
#include <algorithm>

// lambdas syntax : [caputures] (params) {body}

// void func(int n) {
//     std::cout << n << ",";
// }

struct print_functor{
    int lastResult{-1};
    void operator()(int n){
        std::cout << n << ",";
    }
};

int main() {

    std::vector<int> v{1,3,2,5,9};


    int lastResult = -1;
    auto print_v = [&lastResult](int n){ lastResult=n; std::cout << n << ","; };

    std::for_each(begin(v),
                  end(v),
                  /*[](int n){ std::cout << n << ","; }*/
                  /*func*/
                  print_v
                  /*print_functor()*/);

    std::cout << "\n" << lastResult << std::endl;

    /*
        for(auto element : v){
            std::cout << element << ",";
        }
    */

    std::cout << std::endl;

    return 0;
}