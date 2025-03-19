/*
    tatic Cast (static_cast):

    Compile-time check: The conversion is checked at compile time, which means the compiler verifies if the cast is valid based on the types involved.
    No runtime overhead: Since the check happens at compile time, there's no additional runtime cost.
    Limited to compatible types: You can use static_cast to convert between types that are related by inheritance or are otherwise compatible (like int to double).
*/

#include <iostream>

class Base {
    public:
        virtual void print() { std::cout << "Base\n"; }
    };
    
class Derived : public Base {
    public:
        void print() { std::cout << "Derived\n"; }
};
    
int main() {
    Base* b = new Base();
    Derived* d = static_cast<Derived*>(b); // This will compile, but might not work as expected
    d->print(); // This will print "Base", not "Derived" because b is not actually a Derived object
    return 0;
}


/*
    Dynamic Cast (dynamic_cast):

    Runtime check: The conversion is checked at runtime, which means the program checks if the cast is valid when it's executed.
    Runtime overhead: Since the check happens at runtime, there's a small performance cost.
    Safe for polymorphic types: You can use dynamic_cast to convert between polymorphic types (classes with at least one virtual function).

*/

// class Base {
//     public:
//         virtual void print() { std::cout << "Base"; }
// };
    
// class Derived : public Base {
//     public:
//         void print() { std::cout << "Derived"; }
// };
    
// int main() {
//     Base* b = new Derived(); // Create a Derived object and store its address in a Base pointer
//     Derived* d = dynamic_cast<Derived*>(b); // This will succeed because b actually points to a Derived object
//     if (d != nullptr) {
//         d->print(); // This will print "Derived"
//     } else {
//         std::cout << "Cast failed";
//     }
//     return 0;
// }

/*
    In summary:

    Use static_cast for conversions between compatible types, such as built-in types or types related by inheritance, when you're sure the conversion is safe.
    Use dynamic_cast for conversions between polymorphic types, when you're not sure if the conversion is safe, and you want the program to check at runtime.
    Note: If you're using dynamic_cast and the cast fails, it will return a null pointer (nullptr)
*/