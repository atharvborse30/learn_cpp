//vtable (virtual table) - supports dynamic dispatch
/*
    any time I use a virtual keyword a virtual table is created
*/

#include <iostream>
class Base{
    public:
        Base(){
            std::cout << "Base constructor" << std::endl;
        }
        virtual ~Base(){
            std::cout << "Base Destructor" << std::endl;
        }
        virtual void MemberFunc(){
            std::cout << "Base::MemberFunc()\n";
        }
};

class Derived : public Base {
    public:
        Derived() {
            std::cout << "Derived Constructor" << std::endl;
        }
        ~Derived(){
            std::cout << "Derived Destructor" << std::endl;
        }
        void MemberFunc() override {
            std::cout << "Derived::MemberFunc()\n";
        }
};

int main(){
    // Create a Base* that can point to 'Base' or 'Derived', i.e anything 
    // that 'is-a'
    // We also have a vtable that is created for this instance of the object
    Base* instance = new Derived;
    // When we call a member function, vtable points us to the correct
    // member function
    instance->MemberFunc();
    delete instance;

    instance = new Base;
    instance->MemberFunc();
    delete instance;

    return 0;
}