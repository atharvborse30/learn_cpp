#include <iostream>

struct Pair{  /* vec2 */
    float x,y;
    Pair(float _x, float _y) : x(_x), y(_y) {}
};

struct Triple{ /* vec3 */
    float values[3];
    Triple(){
        std::cout << "Triple::Triple() Constructor\n";
    }
    //Constructor
    explicit Triple(const Pair& p){
        std::cout << "Triple::Triple(Pair) Constructor\n";
        values[0] = p.x;
        values[1] = p.y;
    }
    explicit operator Pair() const{
        std::cout << "operator Pair()\n";
        return Pair(values[0], values[1]);
    }
};

int main(){

    Pair p(10.10f, 11.11f);

    Triple t; // Default constructor
    t.values[0] = 1.1f; t.values[1] = 2.2f; t.values[2] = 3.3f;
    
    t = static_cast<Triple>(p);  //copy constructor
    Triple t2 = static_cast<Triple>(p); // copy constructor

    std::cout << static_cast<Pair>(t).x << std::endl;

    Pair p2 = static_cast<Pair>(t);
    std::cout << p2.x << "," << p2.y << std::endl;
    std::cout << ((Pair)t).x << "," <<((Pair)t).y << std::endl;
}