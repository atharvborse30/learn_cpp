//namespace is basically a way to group blocks of code so that they have a unique name

// use-cases of 'using' keyword :-
// 1. using namespace std;
// 2. type alias
//    - 'typedef'
//    better bcz it's easier to use with templates

#include <iostream>
#include <vector>

// typedef void void_t; is the same as below
// equivalent to 
using void_t = void;

void_t foo(){
    using std::cout; 
    cout << "will this work?\n";
}

template<class T, size_t>
struct DataStructure{
    //some data structure
};

//typedef DataStructure<int, 10> DataStructureInt10;
//using DataStructureInt10 = DataStructure<int, 10>;
template<class T>
using DataStructure10 = DataStructure<T, 10>;

int main(){
    using std::cout;
    cout << "Atharv's Modern C++ Series\n";

    foo();

    DataStructure10<int> t;
    DataStructure10<float> t2;

    return 0;
}