#include <iostream>

void point(int x, int y, int z=0, int w=0){
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
    std::cout << w << std::endl;
}

int main() {
    point(2,7);

    return 0;
}