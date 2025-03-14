#include <iostream>
#include <string>

struct Entity{
    Entity() : name("Atharv"), x(0), y(0), collection(nullptr){

    }
    // or we can also use 
    //Entity() = default;

    std::string name;
    int x;
    int y;
    int* collection;
};


int main(){

    Entity e{}; // if we don't put {} here we will get random garbage values. by providing {} we get 0 value
    std::cout << e.name << std::endl;
    std::cout << e.collection << std::endl;
    std::cout << e.x << std::endl;
    std::cout << e.y << std::endl;

    return 0;
}