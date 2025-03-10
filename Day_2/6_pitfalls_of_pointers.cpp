#include <iostream>

// Pitfalls of pointers
// 1. nullptr dereference
// 2. memory leaks
// 3. dangling pointer
int* returnMemory() {
    //this is just stack allocated memory
    int result = 42;
    return &result;
}

// 4. double free


int main() {
    // if we putted NULL instead of nullptr , then NULL will act as a 0,
    // but what happens if we don't point to point to anything which well, if we don't know what to point to yet this (assigning nullptr) 
    // is the safest thing we can do, we should at least just point to null rather than assume that there's going to be some default value
    // here
    
    // 1. Pitfall - nullptr dereference
    int* px = nullptr;
    /*
    where we run into problems though is we try to dereference a null value and set this value to something meaningful
    */
   *px = 42; // by trying to run these will get segmentation fault (core dumped)

   
   // 2. Pitfall - memory leaks
   // we forget to deallocate memory, let's say wherever we are using a dynamically allocated array 
   int* array = new int[1000];
   // here we're allocating 1000 integers so 4000 bytes on most machines 
   // here the program will run fine , no crash no problem, so how would i know this error ever occurs and that's sort of the problem
   // you might not ever find it.
   // so to find out such type of errors or memory leaks , use "VALGRIND" for linux, "SANITIZERS"
   // VALGRIND will give you memory leak summary
   // in cmd type - valgrind <file_name>
   // or 
   // in cmd type - g++ -g -fsanitize=address <file_name.cpp> -o <file_name> && <file_name>


   // 3. Pitfall - Dangling pointer
   int* pd = returnMemory();
   std::cout << "*pd: " << *pd << std::endl;
   // here we're getting on a legar read that means we're trying to read some memory that has been deallocated here, 
   // bcz this was just stack allocated memory


   // 4. Pitfall - double free
   int* x = new int;
   *x = 42;

   delete x;
   // if we delete one time no error will come
   delete x;
   // now if we delete again then we will get error free(): double free detected in tcache 2 Aborted (core dumped) , bcz we've deleted
   // the same memory twice
   // or we can check using tools like thise below
   // type in cmd - g++ -g -fsanitize=address <file_name.cpp> -o <file_name> && <file_name> 

    return 0;
}