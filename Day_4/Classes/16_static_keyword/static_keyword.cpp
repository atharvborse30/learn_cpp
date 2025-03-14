#include <iostream>

void foo(){
    // static doesn't live in the stack , it doesn't live in the heap, but it actually lives in the actual executables
    // static variables are allocated in the binary (or object or the exectuable)
    static int s_variable = 0; // if we don't include static here then everytime we will get '1' as a value.
    s_variable += 1;

    std::cout << s_variable << std::endl;
}

int main() {

    for(int i=0; i<10; i++){
        foo(); //scope is only to foo() for static s_variable
    }

    //s_variable = 10; //will get compile error 

    //int x = 0;  //x is a local variable

    //int* p = new int;  // p is a local variable.
                       // p points to memory allocated on the heap.
                       // the memory on the heap leaves until we say so.
    
    // to be specific here p here is a pointer that's allocated on the stack so it would go away,
    // but the actual memory that it points to that's what's allocated on the heap.

    //delete p; 

    return 0;
}

// to see how static program is actually stored in the executable, we're going to use a tool 'objdump' for linux, for windows we have 'opt-dump'
// run in cmd $ objdump -t ./static_keyword
// run in cmd $ objdump -t ./static_keyword | grep s_variable