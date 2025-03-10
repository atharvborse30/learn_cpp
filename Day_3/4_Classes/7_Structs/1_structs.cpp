#include <iostream>

// A Vector3f data type, storing floats
class Vector3f{
    public:

        //Constructor
        // used member initializer list here 
        // check order here
        Vector3f(): x(1.0f), y(2.0f), z(3.0f){
            // x = 0.0f;
            // y = 0.0f;
            // z = 0.0f;
        }

        float x,y,z;
};

//stream operator
std::ostream& operator<<(std::ostream& os, const Vector3f& obj){
    
    os << obj.x << "," << obj.y << "," << obj.z;
    
    return os;
}

int main() {

    Vector3f myVector1;

    // stream operator
    std::cout << myVector1 << std::endl;

    return 0;
}