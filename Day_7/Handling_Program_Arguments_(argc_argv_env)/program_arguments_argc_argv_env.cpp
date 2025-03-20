#include <iostream>
#include <cstring>

/*
    g++ main.cpp -o prog

    here g++ is executable
    main.cpp -o prog is arguments
    -o is flags

    argc - count
    argv - values as c-strings
    env - environment variables
*/

int main(int argc, char* argv[], char* env[]){

    std::cout << "argc: " << argc << std::endl;
    if(argc < 2) {
        std::cout << "Usage: ./prog some_string" << std::endl;
        return 0;
    }

    for(int i=0; i < argc; i++){
        std::cout << "[" << i << "]" << argv[i] << std::endl;
    }

    std::cout << "\nenv: " << *env << std::endl;

    // print all the different environment variables
    // int i = 0;
    // for(;;){
    //     std::cout << env[i++];
    //     if(env[i]==nullptr){
    //         break;
    //     }
    //     break;
    // }

    // or use this
    std::cout << std::getenv("PATH") << std::endl;

    return 0;
} 