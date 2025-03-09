#include <iostream>

int main() {

    for(int x =0; x<10; x++){
        for(int i=0; i<10; i++) {
            //break;
            //continue;
            std::cout << "Start of loop" << std::endl;
            //continue;
            //break;
            std::cout << "i is: " << i << std::endl;
        }
        std::cout << "x is: " << x << std::endl;
    }
    

    return 0;
}