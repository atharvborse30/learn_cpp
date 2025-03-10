/*
   raw pointers allow sharing
    - they allow room for errors (meaning fogetting to deallocate)
    - ownership

   to fix the raw pointers problems we use smart pointer
   smart pointer address these issues of raw pointers
   -smart pointer helps make sure that you can de-allocate or don't have to worry about when you deallocate your memory
*/

//(RAII - Scoped)
// Unique_ptr

#include <iostream>
#include <memory>   //unique_ptr

// Some User defined type
class UDT{
    public:
        // Constructor (called on creation)
        UDT() { std::cout << "UDT Created" << std::endl; }
        // Destructor (called on destruction)
        ~UDT() { std::cout << "UDT Destroyed" << std::endl; }
};

int main(){

    // make a smart unique_ptr here
    //std::unique_ptr<UDT>; // here nothing happens bcz it is a pointer and i haven't allocated any memory so how do we allocate memory, given below using =
    //creating one unique pointer
    std::unique_ptr<UDT> mike = std::unique_ptr<UDT>(new UDT);
    
    //creates new pointer and makes a copy of it by calling copy constructor
    //std::unique_ptr<UDT> joe = mike;  // will print error , bcz here not allowed to make copy

    // we are however allowed to transfer ownership
    // we are allowed to 'move' a unique_ptr 
    // but we cannot 'copy' with unique_ptr 
    //std::unique_ptr<UDT> joe = std::move(mike); // this is allowed

    //delete mike;   // here we don't have to delete bcz it is automatically got deleted above, you can't delete a unique pointer bcz it is a scoped pointer it's going to delete itself once it leaves this curly brackets

    // creating an 'array' that is pointed to, by one unique pointer
    // std::unique_ptr<UDT[]> mike_array = std::unique_ptr<UDT[]>(new UDT[10]);
    //the equivalent to line above is :
    std::unique_ptr<UDT[]> mike_array = std::make_unique<UDT[]>(10);
    // what make_unique is going to do is well instantiate or create however many of the items that we want, so we want this UDT this user defined type it is still an array and how many of them we want is given 10 here


    return 0;
}

/*
    with unique_ptr :
        - we cannot share (no copies are allowed)
        - we don't have to delete
          - deletes within the scope (block scope)
*/