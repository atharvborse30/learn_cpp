#ifndef VECTOR3F_HPP
#define VECTOR3F_HPP

// A Vector3f data type, storing floats
class Vector3f{
    public:

        //Constructor
        Vector3f();

        // we need to make sure that we initialize things in order, or in general keep them in this order as they are laid out as the member variables we change those values
        float x,y,z;
};

#endif