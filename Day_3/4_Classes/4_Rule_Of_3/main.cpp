#include "Array.hpp"
#include <iostream>

int main() {

    // Initialize all of our data
    Array myArray;

    myArray.SetData(0,100);
    myArray.SetData(1,200);
    myArray.SetData(2,300);

    Array myArray2;
    myArray2 = myArray;  //copy assignment operator

    myArray.PrintingData();
    myArray.PrintingData();

    return 0;
}