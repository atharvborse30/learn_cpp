#include <iostream>

// union differs from a struct in that it only holds the largest type

union U{
    int i;
    short s;
    float f;

    void printi(){
        std::cout << i << std::endl;
    }
};

int main() {
    U myUnion;
    myUnion.i = 2003;
    std::cout << myUnion.i << std::endl;

    std::cout << myUnion.s << std::endl;

    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(short) << std::endl;
    std::cout << sizeof(float) << std::endl;
    std::cout << sizeof(myUnion) << std::endl;

    return 0;
}