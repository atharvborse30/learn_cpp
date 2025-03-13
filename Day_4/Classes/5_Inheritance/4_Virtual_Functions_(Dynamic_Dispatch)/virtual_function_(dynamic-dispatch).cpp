#include <iostream>

/*
    dynamic dispathc that means at runtime be able to find the correct
    function to call , now how do we know which function is correct and 
    this is where virtual functions come into play in c++
*/
class Base{
    public:
        Base() { std::cout << "Base Constructor" << std::endl; }
        ~Base() { std::cout << "Base Destructor" << std::endl; }
        virtual void MemberFunc() { std::cout << "Base::MemberFunc()\n"; }
};


//Derived is-a type of Base
class Derived : public Base {
    public:
        Derived() { std::cout << "Derived Constructor" << std::endl; }
        ~Derived() { std::cout << "Derived Destructor" << std::endl; }
        void MemberFunc() override { std::cout << "Derived::MemberFunc()\n"; }
};

/*
    since derived is at the bottom of my chain, 
    we define it as 
    look if somewhere up in my inheritance hierarchy there's another
    function that has the same name member function here which we see here
    so i want to override that behavior and these virtual keyword is the 
    enabling or the sort of qualifier you on member functions non-static
    member functions in a base class to say that hey this function could
    be over written by some of its derived classes

    Note- in newer c++ , you didn't need to specify override , the code 
    will still run
*/

int main(){

    // Base baseInstance;
    // baseInstance.MemberFunc();

    // Derived derivedInstance;
    // derivedInstance.MemberFunc();

    // Base* instance = new Base;
    Base* instance = new Derived;
    // a way to call MemberFunc() 
    instance->MemberFunc();
    

    //a way (explicit way) to call Base Class MemberFunc()
    // instance->Base::MemberFunc();
    // delete instance;

    return 0;
}