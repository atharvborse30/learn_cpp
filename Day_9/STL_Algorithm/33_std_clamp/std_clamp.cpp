#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

template <class T>
std::vector<T> cleanUp(const std::vector<T>& data){
    std::vector<T> result;
    result.reserve(data.size());

    for(size_t i=0; i<data.size(); i++){
        result.push_back(std::clamp(data[i],0,255)); 
    }
    return result;
}

int main() {
/*
    int value = 256;

    std::cout << "value before: " << value << std::endl;
    value = std::clamp(value,0,255);
    std::cout << value << std::endl;
    //std::cout << std::clamp(value,0,255) << std::endl;
    std::cout << "value after: " << value << std::endl;
*/
    std::vector v = {0,412,244,96,-5,97};
    auto cleaned = cleanUp(v);

    for(auto elem : cleaned) {
        std::cout << elem << std::endl;
    }

    return 0;
}