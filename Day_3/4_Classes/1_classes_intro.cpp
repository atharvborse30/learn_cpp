#include <iostream>
#include <string>

// 1. Classes can do information hiding (public/private/protected)
// 2. Classes have the ability to create instances of objects and "think" in objects in our software 

class Student{   // Student - Our new user defined type
    public: 
        // Special actions
        // Actions - Constructor
        Student() {
            std::cout << "Constructor" << std::endl;
        }

        //Special actions
        // Actions - Destructor
        ~Student() {
            std::cout << "Destructor: " << m_name << std::endl;
        }

        // Hidden 'fields' or 'attributes' of our class
        void printName() {
            std::cout << "name is " << m_name << std::endl;
        }

    public:
        std::string m_name;
};

int main() {
    
    Student atharv;
    atharv.m_name = "atharv";
    atharv.printName();

    Student yash;
    yash.m_name = "yash";
    yash.printName();

    return 0;
}