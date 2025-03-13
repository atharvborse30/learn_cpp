#ifndef INTARRAY_HPP
#define INTARRAY_HPP

#include <string>

class IntArray{
    public:
        // The Big 3
        // 1. Constructor
        IntArray(std::string name);

        // 2. Destructor
        ~IntArray();

        // 3. Copy Constructor policy
        IntArray(const IntArray& rhs);

        // Copy Assignment operator policy
        IntArray& operator=(const IntArray& rhs);

        //The other 2 (in total, making 'The Big 5')
        // Move Constructor policy
        IntArray(IntArray&& source);
        // Move Assignment operator policy
        IntArray& operator=(IntArray&& source);

    private:
        std::string m_name;
        int* m_data;
};

#endif