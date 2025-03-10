#include <iostream>

// Heap memory uses new and delete , we have to manually allocate and delete (free up) memory
// allows us to allocate resources at runtime.
// resource is returned to us in a pointer.

int main() {

    int numberOfStudents = 0;

    std::cout << "how many students in our class ?" << std::endl;
    std::cin >> numberOfStudents;

    /*
    here we are able to at runtime just allocate or ask our system for how many resources we need that is how many integers
    or how many bytes of information, that's what new returns to us here
    */

    int* studentids = new int[numberOfStudents];

    for(int i = 0; i < numberOfStudents; i++) {
        studentids[i] = i;
    }

    delete[] studentids;
    // here we are deleting an array of data so here we have to use brackets,
    // if we just have one integer then, let's see
    int* y = new int;
    delete y;
    //then just use single delete as such

    // we can use valgrind here to check if the memory is freed or not 
    // run - valgrind 2_dynamic_memory_allocation_with_new_and_delete

    return 0;
}


/*
why we had to learn about pointers first bcz we need to return the start of whatever that collection of memory is that
we've collected for
*/