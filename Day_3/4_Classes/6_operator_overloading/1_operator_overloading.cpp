#include <iostream>

// A Vector3f data type, storing floats
class Vector3f{
    public:

        //Constructor
        Vector3f(){
            x = 0.0f;
            y = 0.0f;
            z = 0.0f;
        }

        //Binary operator
        Vector3f operator+(const Vector3f& rhs) const {
            Vector3f result;
            result.x = x + rhs.x;
            result.y = y + rhs.y;
            result.z = z + rhs.z;
            return result; 
        }

        // operator plus plus
        // pre-increment
        Vector3f operator++(){
            x = x+1;
            y = y+1;
            z = z+1;
            return *this;
        }

        //operator == inside the class
        // bool operator==(const Vector3f& rhs) {
        //     std::cout << "part of class" << std::endl;
        //     if (x == rhs.x &&
        //         y == rhs.y &&
        //         z == rhs.z ) {
        //             return true;
        //         }
        //         return false;
        // }

        float x,y,z;
};

//stream operator
std::ostream& operator<<(std::ostream& os, const Vector3f& obj){
    
    os << obj.x << "," << obj.y << "," << obj.z;
    
    return os;
}

// operator ==  (free function)
bool operator==(const Vector3f& lhs, const Vector3f& rhs) {
    std::cout << "free function" << std::endl;
    if(lhs.x == rhs.x && lhs.y == rhs.y && lhs.z == rhs.z) {
        return true;
    }
    return false;
}

int main() {

    Vector3f myVector;
    myVector.x = 1.f;
    myVector.y = 2.f;
    myVector.z = 3.f;

    Vector3f myVector2;
    myVector2.x = 3.f;
    myVector2.y = 2.f;
    myVector2.z = 1.f;

    //Binary operator
    myVector = myVector + myVector2;

    // operator plus plus
    // pre-increment
    ++myVector;
    ++myVector;
    ++myVector;

    // stream operator
    std::cout << myVector << std::endl;

    // operator ==
    if(myVector==myVector2) {
        std::cout << "vectors are equal" << std::endl;
    } else {
        std::cout << "vectors are not equal" << std::endl;
    }

    return 0;
}