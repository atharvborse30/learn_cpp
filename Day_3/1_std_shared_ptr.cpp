// shared_ptr (helps us avoid calling new/delete)

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

    {
        // Creating our shared pointer
        std::shared_ptr<UDT> ptr1 = std::make_shared<UDT>();
        {
            // then, in a new scope, I share the resource
            std::shared_ptr<UDT> ptr2 = ptr1;  // Remember :- this line was not allowed in unique_ptr bcz we could only havae one thing pointing to a given resource at a time here, but in shared_ptr we have multiple things pointing to the same resource
            // Our reference count is updated
            std::cout << "use count = " << ptr2.use_count() << std::endl;
        } // Then, 'ptr2' is 'freed'

        // Then we check our updated reference count
        std::cout << "use count = " << ptr1.use_count() << std::endl;    
    }

    std::cout << "We should see the destructor call before this line\n";

    return 0;
}

// things to note here :-
// 1. reference count is thread-safe  
//    these value (use_count()) that i return is going to be thread safe and the value is being automatically updated so you don't
//    have to worry about that

// 2. we used make_shared here which is a factory function, bcz it's little bit cleaner and you don't have to worry about calling new and delete, this is also little bit safere if there is some exception that would occur while this object has been allocated you could actually catch that versus if you just call new and have that raw call to the new function