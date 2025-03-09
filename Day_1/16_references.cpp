#include <iostream>
#include <typeinfo>

// references &
// another 2nd use of & symbol - known as alias

/*
the most common use of references is in passing data in functions which is pass by reference, that is the ability to pass a variable that 
already exists in some scope into a function and modify it.

bcz that avoids the copy,
*/

int main() {

    int x = 42;

    /*
    the idea here is that we just have a another variable name "ref" that can refer to x so behind the scenes c++ is doing that
    wherever we see ref it's just replacing it with x 
    */
    int& ref = x;
    // "int&" is the full type, for a reference type
    // can think of it, like a qualifier, like const or like signed etc..

    int* y = nullptr;
    int*& ref2 = y;
    //above is illegal , we can't use which is defined null, to check run the program as given below -
    //g++ -Wall 16_references.cpp -o 16_references && 16_references

    x = 43;
    ref = 44;

    std::cout << "x value is    : " << x << std::endl;
    std::cout << "x type        : " << typeid(x).name() << std::endl;
    std::cout << "x addr is     : " << &x << std::endl;

    std::cout << "ref value is  : " << ref << std::endl;
    std::cout << "ref type        : " << typeid(ref).name() << std::endl;
    std::cout << "ref addr is   : " << &ref << std::endl;

    return 0;
}