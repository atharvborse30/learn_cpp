#include <iostream>

class Base{
    public:
        Base() { 
            std::cout << "Base Constructor" << std::endl; 
            baseData = new int [10]; 
        }
        // to call the base class destructor you have to add virtual to the ~Base destructor
        
        virtual ~Base() {
            std::cout << "Base Destructor" << std::endl; 
            delete[] baseData; 
        }

        virtual void MemberFunc() { std::cout << "Base::MemberFunc()\n"; }

    int* baseData;
};

class Derived : public Base {
    public:
        Derived() {
            std::cout << "Derived Constructor" << std::endl; 
            derivedData = new int[15]; 
        }
        ~Derived() {
            std::cout << "Derived Destructor" << std::endl; 
            delete[] derivedData;
        }

        void MemberFunc() override { std::cout << "Derived::MemberFunc()\n"; }

    int* derivedData;
};

int main(){

    // using heap allocation
    Base* instance = new Derived;
    instance->MemberFunc();
    delete instance;
    /*
        it tell that instead of just calling this derived destructor, we're going to have to 
        look further down our inheritance hierarchy see what our actual type is and then make
        sure we call all the destructors (to avoid memory leaks).
    */

    // using stack allocation 
    // Derived d;

    return 0;
}