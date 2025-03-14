#include <iostream>
#include <string>

struct Entity{
    Entity() : name(), x{2}, y{3}, collection{nullptr} {

    }

    std::string name;
    //In-Class initializer
    int x{1};
    int y{7};
    int* collection{nullptr};
};

int main() {

    Entity e{};
    std::cout << e.name << std::endl;
    std::cout << e.x << std::endl;
    std::cout << e.y << std::endl;
    std::cout << e.collection << std::endl;

    return 0;
}