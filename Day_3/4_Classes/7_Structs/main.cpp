#include <iostream>
#include "Vector3f.hpp"

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