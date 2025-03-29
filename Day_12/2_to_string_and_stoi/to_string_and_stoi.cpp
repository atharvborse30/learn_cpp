// stoi : string to integer
// to_string : converts a integral or floating-point value to string.

#include <iostream>
#include <string>
#include <sstream>

struct GameCharacter{};
std::string to_string(GameCharacter c){
    std::string result;
    return result;
}

int main(){

    std::string ex1 = "45";
    std::string ex2 = "-45";
    std::string ex3 = "4.5";
    std::string base16 = "A0";

    int result1 = std::stoi(ex1);
    size_t pos;
    int result2 = std::stoi(ex2, &pos);
    float result3 = std::stof(ex3);
    int result4 = std::stoi(base16,nullptr,16);

    std::cout << result1 << std::endl;
    std::cout << result2 << std::endl;
    std::cout << "\tcharacters processed: " << pos << std::endl;
    std::cout << result3 << std::endl;
    std::cout << base16 << std::endl;

    // std::to_string examples
    std::string str1 = std::to_string(54);
    std::string str2 = std::to_string(3.14f);
    std::cout << std::endl << str1 << std::endl;
    std::cout << str2 << std::endl;

    // stringstreams with stoi functions for a calculator
    std::string expr = "54 + 46";
    std::stringstream exprStream(expr);

    std::cout << "exprStream.str(): " << exprStream.str() << std::endl;
    int op1, op2;
    std::string token;
    
    exprStream >> token;
    op1 = std::stoi(token);  // My '+' sign

    exprStream >> token;
    op2 = std::stoi(token);

    std::cout << "op1 + op2 is: " << (op1 + op2) << std::endl;

    return 0;
}