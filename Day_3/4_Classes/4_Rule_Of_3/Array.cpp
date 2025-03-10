#include "Array.hpp"
#include <iostream>

Array::Array(){
    std::cout << "Constructor" << std::endl;
    for(int i=0; i<10; i++) {
        data.push_back(i);
    }
}

Array::~Array(){
    
}

//Copy Constructor
// Array myNewArray = someExistingArray;
Array::Array(const Array& rhs) {
    std::cout << "Copy Constructor" << std::endl;
    for(int i=0; i<10; i++) {
        data.push_back(rhs.data[i]);
    }
}

//Copy Assignment Operator
// this is called for when after an object has been constructed
// so object is already constructed, we are just making a copy later e.g. myArray2 = myArray
// return a reference type to our object here
Array& Array::operator=(const Array& rhs) {
    std::cout << "Copy Assignment operator " <<std::endl;

    if(&rhs == this){
        return *this;  //it's just a pointer to the current instance of the object and if i dereference that i'm just getting the Array object back itself
    }
    // equivalent to myArray2 = myArray2

    data.clear();

    for(int i=0; i<10; i++) {
        data.push_back(rhs.data[i]);
    }

    return *this;

}


