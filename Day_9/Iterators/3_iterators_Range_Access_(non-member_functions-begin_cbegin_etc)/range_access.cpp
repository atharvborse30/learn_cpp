#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <iterator>

int main(){

    std::vector<int> container{1,2,3,4,5,6};

    // auto it = cbegin(container);
    auto it = rbegin(container);

    *it = 7;
    std::cout << *it << std::endl;
    //*it = 7; // cannot change due to constant cbegin()
    it++;
    std::cout << *it << std::endl;

    std::cout << "size: " << size(container) << std::endl;
    auto myData = data(container);
    for(size_t i=0; i < size(container); i++){
        std::cout << myData[i] << std::endl;
    }

    return 0;
}