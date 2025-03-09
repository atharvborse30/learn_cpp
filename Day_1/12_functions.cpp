#include <iostream>

//Forward declared
//function declaration
int add(int a, int b);
float add(float a, float b);
auto add(float a, float b) -> float;   // here -> float means return type will be float

//Declared and defined 
void print(void) {
    std::cout << "hello functions" << std::endl;
}

int main() {
    
    //argument are 1 and 2
    // a = 1
    // b = 2
    std::cout << add(1,2) << std::endl;
    std::cout << add(1.2f, (float)5) << std::endl;

    print();

    return 0;
}

int add(int a, int b) {
    std::cout << "int add(int, int)" <<std::endl;
    return a + b;
}

float add(float a, float b) {
    std::cout << "float add(float, float)" << std::endl;
    return a + b;
}