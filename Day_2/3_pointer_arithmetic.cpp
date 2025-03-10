#include <iostream>

int main() {

    int array[] = {1,3,5,7,9};
    int* px = array;

    std::cout << array[0] << std::endl;
    std::cout << "px is: " << px << std::endl;
    std::cout << "px is: " << *px << std::endl;
    px++;
    std::cout << "px is: " << px << std::endl;
    std::cout << "px is: " << *px << std::endl;

    /*
    here we moved up four bytes on the address, why four well that's bcz our arrays each of these boxes are four bytes here.
    even though we only incremented the pointer by one and that's really important fact to know that every time we increment
    a pointer we're moving it the size of the data type which is (int* here) however big the size an integer is 4 bytes,
    and then when we dereference that address since we've moved over one element here
    */

    
    // Show the array offset
    // std::cout << *(px+0) << std::endl;
    // std::cout << *(px+1) << std::endl;
    // std::cout << *(px+2) << std::endl;
    // std::cout << *(px+3) << std::endl;

    std::cout << "\n";
    //instead you can also use these
    std::cout << *(array+0) << std::endl;
    std::cout << *(array+1) << std::endl;
    std::cout << *(array+2) << std::endl;
    std::cout << *(array+3) << std::endl;

    // here our just the variable array by default points to the start of our array and we're offsetting it.


    //another way
    std::cout << "\n";
    // when you're using the brackets you are dereferencing that array or that address already.
    std::cout << array[0] << std::endl;
    std::cout << array[1] << std::endl;
    std::cout << array[2] << std::endl;
    std::cout << array[3] << std::endl;
    std::cout << array[4] << std::endl;

    return 0;
}