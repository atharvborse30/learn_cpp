#include <iostream>
// always include 'header files' never .cpp files
#include "3_interface_implementation.hpp"  // bcz that's where the actual add function has been defined
// i can also pass the whole path here instead of above line both are same -
// #include "D:/mike_shah_cpp/day3/3_interface(.hpp)_vs_implementation(.cpp)_files/3_interface_implementation.hpp" //absolute file path , but this will be going to compile only in my machine not yours , so that's why we use the file name only
// don't include #include "3_interface_implementation.cpp" file here will get error

/*
    what makes #include <iostream> this one different from #include "3_interface_implementation.hpp" ?

    bcz these "" can be found on the system path.
*/

int main() {

    std::cout << add(7,2) << std::endl;

    return 0;
}

// to run these program we need to type in cmd -
// g++ 3_main.cpp 3_interface_implementation.cpp -o 3_main && 3_main


// try doing this in cmd -
// g++ -c 3_main.cpp
// g++ -c 3_interface_implementation.cpp
// g++ 3_main.o 3_interface_implementation.o -o 3_main && 3_main