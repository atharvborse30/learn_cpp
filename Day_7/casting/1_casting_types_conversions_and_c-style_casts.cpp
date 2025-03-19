// when we want to cast or treat a set of bits as a certain data type that's called casting

#include <iostream>
#include <iomanip>

/*
    make sure that when we're casting, we're casting to a type that's bigger of big enough
    for our actual value

    std::cout << (int)c << std::endl; // cast in front of the actual type here is known as c-style cast
*/

int main() {

    int result = 50000;
    unsigned short c = result;
    char d = result;
    std::cout << c << std::endl;
    std::cout << "sizeof(result) : " << sizeof(result) << std::endl;
    std::cout << "sizeof(c) : " << sizeof(c) << std::endl;
    /*
        here we can see that it actually overflows what we can store in 'c' variable here
        so in this case this isn't really a safe type of cast we're losing information so that's
        one thing we have to be aware of when we are actually casting different data types do
        we have enough bytes to fill that data,
        the other thing we have to also be careful about is the sign 
    */

    std::cout << std::fixed;
    std::cout << std::setprecision(6);
    std::cout << (float)7/5 << std::endl; //c-style casting, implicit cast/conversion of 5 to float automatically
    std::cout << (float)7/(float)5 << std::endl; //casting

    return 0;
}