#include <iostream>
#include <string>

// string_view : it's a way that you can optimize your code reduce allocations and it becomes important when you have lots of strings with large length amd you just need to read that string

void PrintString(const std::string_view& param){
    //param+= "some more text";
    std::cout << param << std::endl;
}

int main(){

    const char* s = "this is some really long string...";

    PrintString(s);
    
    std::cout << s << std::endl;

    std::cout << std::endl;

    std::string a = "atharv";
    std::string_view aview = a;

    std::cout << "string   : " << sizeof(a) << std::endl;
    std::cout << "string_view : " << sizeof(aview) << std::endl; 

    return 0;
}