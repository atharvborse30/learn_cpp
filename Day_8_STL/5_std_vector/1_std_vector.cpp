// std::vector : a container that can resize anytime
// it's a dynamic array - heap allocated data structure
// push_back is used to add the elements to the container

#include <iostream>
#include <vector>
//#include  <span>

void PrintData(const std::vector<long>& param){
}
// equivalent to above
// void PrintData(std::span param){ 
// }

void CStyleAPI(long* data, size_t elements){
    // ...
}

int main(){

    // Class argument template deduction (CTAD)
    std::vector<int> myVector{1,2,3};
    std::cout << "capacity: " << myVector.capacity() << std::endl;
    myVector.push_back(4);

    myVector.shrink_to_fit();

    // how to erase the first element with an iterator
    //myVector.erase(myVector.begin()); // will delete 0th element

    // Loops
    for(int i=0; i < myVector.size(); i++) {
        std::cout << myVector[i] << std::endl;
    }
    std::cout << std::endl;

    // equivalent to above
    for(std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++){
        std::cout << *it << std::endl;
    }

    //range based for loop
    // WHAT NOT TO DO
    // for(auto& elem : myVector){
    //     myVector.erase(myVector.begin());
    //     std::cout << elem << std::endl;
    // }

    std::cout << "capacity: " << myVector.capacity() << std::endl;

    std::cout << std::endl;

    std::vector<long> myVector2;
    myVector2.reserve(50); 

    for(size_t i=0; i != 50; ++i){
        myVector2.push_back(i);
    }

    PrintData(myVector2);

    CStyleAPI(myVector2.data(), myVector2.size());

    return 0;
}