#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <list>

int main(){

    auto print_c = [](const auto& c, const char* msg){
        std::cout << msg << ":";
        for(auto elem : c){
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    };

    std::random_device rd;
    std::mt19937 g(rd());

    std::vector<int> v{1,2,3,4};
    std::vector<int> original_v;
    std::copy(v.begin(), v.end(), std::back_inserter(original_v));
    
    for(size_t i=0; i<10; i++){
        print_c(original_v, "original");
        print_c(v, "vector: ");

        std::shuffle(v.begin(), v.end(), g);
        print_c(v, "shuffled: ");
        std::cout << std::endl;
    }

    return 0;
}