#include <iostream>

struct API{
    API() {

    }

    ~API() {

    }

    // Member variable that belongs to each instance
    int m_local;

    // static's scope is only within this class
    // declaration
    static int MAJOR;
    static int MINOR;

    // static member function
    static int GetMajorVersion(){
        
        return MAJOR;
        //return m_local; // will give error, bcz static member function can only return the
                          // or use the static member variables, so things that are not static cannot work here.
    }

};

//static variables in a class exist outside of the class, the scope is within the class however.
// definition
int API::MAJOR = 7;


int main() {

    //API instance;
    //instance.MAJOR = 7;

    std::cout << "MAJOR: " << API::MAJOR << "\n";
    std::cout << "MAJOR: " << API::GetMajorVersion() << "\n";

    return 0;
}