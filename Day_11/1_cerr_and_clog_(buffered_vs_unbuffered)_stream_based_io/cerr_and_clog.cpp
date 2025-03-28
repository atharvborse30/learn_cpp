// redirecting output with >stdout.txt vs 2>stderr.txt
#include <iostream>

// returns -1 if the file fails to load
int loadFile(/*...*/){
    return -1;
}

int main(){

    // use std::cerr
    // 1. bcz we can redirect and log that output appropriately
    // 2. it signals we're in 'error logging' mode
    // 3. it's unbuffered -- and that's important, we get our data
    //    output right away. If we are in an 'error state', this is 
    //    important to get the log of error messaging as fast as possible.
    //    Note : Unbuffered, typically slower, but for error messaging this
    //           is likely acceptable.
    if(loadFile() == -1){
        std::cerr << "this is from std::cerr\n";
        std::cerr << "there was an error!\n";
    }
    std::cout << "this is from std::cout\n";
    std::clog << "this is from std::clog\n";

    return 0;
}