// weak_ptr : non-owning pointer, does not increase the reference count.
// safer way to have dangling pointer
// 'break cycles'
//                weak_ptr1 ---> shared_ptr2 --> ptr3

#include <iostream>
#include <memory>

// Some User Defined type
class UDT{
    public:
        // Constructor (called on creation)
        UDT() { std::cout << "UDT Created" << std::endl; }

        // Destructor (called on destruction)
        ~UDT() { std::cout << "UDT Destroyed" << std::endl; }
};

int main() {

    std::weak_ptr<UDT> ptr2;

    {
        // Creating our shared pointer
        std::shared_ptr<UDT> ptr1 = std::make_shared<UDT>();
        {
            // then, in a new scope, I share the resource
            ptr2 = ptr1;  // Remember :- this line was not allowed in unique_ptr bcz we could only havae one thing pointing to a given resource at a time here, but in shared_ptr we have multiple things pointing to the same resource
            // Our reference count is not updated with a weak_ptr
            std::cout << "(inside scope) use count = " << ptr2.use_count() << std::endl;
        } // Then, 'ptr2' is 'freed'

        // Then we check our updated reference count
        std::cout << "use count = " << ptr1.use_count() << std::endl;    
    }

    std::cout << "Is weak_ptr (object that it points to) valid: " << ptr2.expired() << std::endl;

    std::cout << "We should see the destructor call before this line\n";

    return 0;
}