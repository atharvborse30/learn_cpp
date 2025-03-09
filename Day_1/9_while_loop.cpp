#include <iostream>

int main() {

    int countdown = 3;

    while(countdown > 0) {
        std::cout << countdown << std::endl;
        countdown--;
    }

    //do while loop
    std::cout << "Do while loop :" <<std::endl;

    countdown = 3;
    do{
        std::cout << countdown << std::endl;
        countdown--;
    }while(countdown > 0);

    return 0;
}