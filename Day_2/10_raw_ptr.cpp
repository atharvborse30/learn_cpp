#include <iostream>

int main() {

    int* array = new int[100];
    for(int i=0; i<100; i++) {
        array[i] = i+1;
    }

    int* ptr = array;

    // Output value pointed to by ptr
    std::cout << "*ptr = " << *ptr << std::endl;

    delete[] array;

    //later in my program
    float* newarray = new float[100];

    // Create a second pointer
    int* ptr2 = ptr;
    std::cout << "*ptr2 = " << *ptr2 << std::endl;

    return 0;
}

/*
   raw pointers allow sharing
    - they allow room for errors (meaning fogetting to deallocate)
    - ownership

   to fix the raw pointers problems we use smart pointer
   smart pointer address these issues of raw pointers
   -smart pointer helps make sure that you can de-allocate or don't have to worry about when you deallocate your memory
*/