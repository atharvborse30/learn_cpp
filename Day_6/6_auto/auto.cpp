#include <iostream>
#include <vector>

int main(){

    std::vector<int> ints;
    ints.push_back(1);
    ints.push_back(2);
    ints.push_back(3);

    // for(std::vector<int>::iterator it = ints.begin(); it!=ints.end();it++){
    //     std::cout << *it << std::endl;
    // }
    //equivalent to this, both will work same
    for(auto it = ints.begin(); it!=ints.end();it++){
        std::cout << *it << std::endl;
    }

    return 0;
}