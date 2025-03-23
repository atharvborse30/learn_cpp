#include <iostream>
#include <algorithm>
#include <vector>

int main(){

    auto print_v = [](auto c,const char* msg){
        std::cout << msg;
        for(auto elem : c){
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    };

    std::vector v{2,1,4,3,5};
    print_v(v,"before: ");

    for(auto i = v.begin(); i != v.end(); ++i){
        std::rotate(std::upper_bound(v.begin(),i, *i), i,i+1);
    }
    print_v(v, "sorted: " );

    /*
    auto loc = std::rotate(v.begin(), v.begin()+1, v.end()-1);
    print_v(v, "after: ");

    std::cout << "loc: " << *loc << std::endl;
    */

    return 0;
}