#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student{   // Student - Our new user defined type
    public: 
        
        // Actions - Constructor
        Student();

        // Actions - Destructor
        ~Student();

        // Action - print the student name
        void printName();

    public:
        std::string m_name;
};

#endif