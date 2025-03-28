#include <iostream>

int main(){

    std::cout << "Hello world" << std::endl;
    std::cout.write("hello world\n", 12);

    const char* stringliteral = "atharv\n";
    std::cout.write(stringliteral, sizeof(stringliteral));

    std::cout.put('a');
    std::cout.put('a');
    std::cout.put('b');
    std::cout.put('\n');

    auto getFlags = std::cout.flags();

    bool value = true;
    std::cout << std::boolalpha << value << std::endl;
    std::cout.flags(getFlags);
    std::cout << value << std::endl;

    std::cout << std::hex << 12 << std::endl << std::oct << 12 << std::endl;

    std::ofstream output("output.txt");
    auto originalCoutBuffer = std::cout.rdbuf(); // stdout

    std::cout.rdbuf(output.rdbuf());
    std::cout.write("atharv\n",5);

    std::cout.rdbuf(originalCoutBuffer);
    std::cout << "back to normal" << std::endl;
    

    return 0;
}