//3_interface_implementation.hpp (interface)

/*
   to not run into a problem for that we use guard to make sure that if i include "3_interface_implementation.hpp" multiple times
   in my project that i don't keep repeating these int sum(int a, int b) function definition
*/

// here #ifndef INC_3_INTERFACE_IMPLEMENTATION_HPP is a preprocessor to say if not defined like INC_3_INTERFACE_IMPLEMENTATION_HPP
// then just #define like INC_3_INTERFACE_IMPLEMENTATION_HPP
#ifndef INC_3_INTERFACE_IMPLEMENTATION_HPP
#define INC_3_INTERFACE_IMPLEMENTATION_HPP

int add(int a, int b);

#endif // INC_3_INTERFACE_IMPLEMENTATION_HPP

/*
   so that way this file will only get included once in our whole project
*/
