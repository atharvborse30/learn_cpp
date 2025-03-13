#include <iostream>

struct Entity{
    int x{4}, y{5};
};

/*
    so in a sense what the virtual keyword is doing here is that it just merge
    all of the member variables.
    Virtual inheritance - technique that ensures only one copy of a base class's member 
                          variables are inherited by grandchild derived classes.

                          - with the help of virtual inheritance if classes B and C inherit 
                            virtually from class A, then objects of class D will contain only 
                            one set of the member variables from class A
*/

struct Warrior : virtual public Entity{
    int power{10};
};

struct Goblin : virtual public Entity{
    int power{7};
};

struct Player : virtual public Goblin, virtual public Warrior{

};


int main(){

    Player atharv;
    std::cout << atharv.x << std::endl;
    std::cout << atharv.y << std::endl;

    std::cout << atharv.Goblin::power << std::endl;
    std::cout << atharv.Warrior::power << std::endl;
}