#include <iostream>
#include <memory>

struct IntDeleter{
    void operator()(int* int_ptr){
        std::cout << "IntDeleter called" << std::endl;
        delete int_ptr;
    }
};

int main(){

    std::unique_ptr<int, IntDeleter> my_ptr(new int);
    
    return 0;
}

/*
    Custom deleters are useful when :-

    Additional cleanup is required: Before deleting an object, you might need to perform additional cleanup, such as releasing system resources or closing handles. Custom deleters can handle these tasks.
    Using a different deletion mechanism: Instead of using the default delete operator, you might want to use a custom deletion mechanism, such as a memory pool or a custom allocator.
    Logging or auditing: Custom deleters can log or audit the deletion of objects, which can be helpful for debugging or monitoring purposes.
    Exception handling: Custom deleters can catch and handle exceptions that occur during deletion, ensuring that resources are properly released even in the presence of errors.
    Example Use Cases:
    
    Managing resources that require custom cleanup, such as file handles, sockets, or database connections.
    Implementing a memory pool or custom allocator for efficient memory management.
    Logging or auditing the creation and deletion of objects for debugging or monitoring purposes.
    Note that custom deleters can also be used with std::shared_ptr in a similar way.
*/