// added in c++20 , will require appropriate compiler
/*
    the class template span describes an object that can refer to a contiguous sequence of objects with the first element of the sequence at position zero.
    A span can either have a static extent, in which case the number of elements in the sequence is known
    at compile-time and encoded in the type,
    or a dynamic extent.
    If a span has dynamic extend, a typical implementation holds two members: a pointer
    to T and a size. 
    A span with static extent may have only one 
    member : a pointer to T.

*/

/*
    what span means here is that :-
    If i create some sort of data structure (for ex: array) and that array got some sort of size let's say
    5 here, so what our span is doing is it's just a sort of view into this array here. where we've got the pointer to the first memory location of array, and then we've got the size of the particular element.

    span is just a pointer and a size for some class 

*/

#include <iostream>
#include <span>
#include <array>
#include <vector>

void PrintIntData(const std::span<int> param){
    if(param.extent == std::dynamic_extent){
        std::cout << "dynamic " << std::endl;
    } else {
        std::cout << "static " << std::endl;
    }
    
    for(auto& elem : param){
        std::cout << elem << std::endl;
    }
}

int main(){

    std::array<int, 4> arr = {1,2,3,4};
    std::span mySpan{arr};
    std::cout << mySpan.extent << std::endl;
    PrintIntData(arr);

    std::vector<int> myVector = {1,2,3,4,5,6,7};
    PrintIntData(std::span(myVector.begin(), 3));

    return 0;
}