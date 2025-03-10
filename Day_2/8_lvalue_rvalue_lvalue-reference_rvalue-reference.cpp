//lvalue : something with a memory location &(i);
//rvalue : (on the right side of an assignment), does not point anywhere
// lvalue_reference : (int& lvref = ii)    int& as alias

#include <iostream>

int get42() {
    return 42;
}

void setValueTo99(int& changeMe) {
    changeMe = 99;
}

//to run setValueTo99(10) function use this function
// void setValueTo99(const int& changeMe) {
//     //changeMe = 99;
// }

int main() {
    
    int a = 1;
    int b = 2;
    int c = (a+b);

    int array[100];
    array[10+a];

    //get42() = 100; // will give error as lvalue required as left operand of assignment

    //lvalue_reference
    //int& ref = 10;  //this is not allowed will throw error - cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'
    const int& ref = 10;  //this will work

    int i = 10;
    setValueTo99(i);
    // will work here bcz, we're able to refere to or find this memory location somewhere and it will change it to 99

    //setValueTo99(10); // but if we try like this we will get some error here

    //rvalue reference
    int&& rvref = 10; // this is a rvalue reference
    //this will allow us to do is actually take this sort of temporary value that's been created here from our rvalue and actually store it here
    std::cout << rvref << std::endl;


    std::string s1 = "mike ";
    std::string s2 = "a really long str";
    std::string&& s3 = s1+s2;
    /*
    value of s1 and s2 putted in temporary storage and then copy that result into s3 , s3 is invoking a copy assignment constructor when we built this object so instead what i might want to do is say look I've already done the work of creating this (s1 and s2) so why not instead of copying s1 and s2 values we just move those values into s3 here using putting && s3 - we know that this is a rvalue on the right side so let's go ahead and just refer to whatever the result was of s1 and s2 don't bother to do the copy into all of s3 memory which again might further invoke further copies or expansions within this data structure and so on 
    */
   std::cout << s3 << std::endl;

    return 0;
}

/*
        lvalue  |   rvalue
    ---------------------------
       a,b,c    |   1,2  (because they're not things with memory they're just values that are temporarily created), here 1,2 will copy to the a,b so its not that fast.locations.
                |  (a+b) also is a rvalue

                | int&& rvref = 10 will move 10 to rvref so it is efficient and fast
*/