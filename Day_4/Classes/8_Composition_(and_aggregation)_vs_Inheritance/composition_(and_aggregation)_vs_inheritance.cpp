#include <iostream>

// inheritance - "is-a" relationship
// composition - "has-a" relationship
// aggregation - "has-a" relationship, difference is that in aggregation
//               Lifetime is not necessarily tied to the object

struct Point2D{
    int x,y;
};

class Character{
    public:
        // : ref_home(ref) uses a member initializer list to ensure that the reference does get assigned when the object is creted
        Character(Point2D& ref) : ref_home(ref) {
            ref_home = ref;
        }
        ~Character() { }

    /*
        a character is composed of two Point2D's here.
        So character "has-a" point2D
    */
    private:
        Point2D m_position;
        Point2D m_direction;
        Point2D& ref_home;
};


int main(){
    
    Point2D somePoint;
    Character atharv(somePoint);

    /*
        aggregation usually arises when you have references that you're putting inside your class or perhaps pointers bcz
        their lifetime might exist elsewhere or and be taken care of in different ojects or be global variables
    */
}