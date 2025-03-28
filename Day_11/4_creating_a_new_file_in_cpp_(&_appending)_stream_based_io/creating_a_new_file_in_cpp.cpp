#include <iostream>
#include <fstream> // work with files

int main(){

    std::ofstream myFile("myFile.txt", std::ios::app);
    if(myFile.is_open()){
        std::cout << "File handler successfully created\n";
    }

    myFile.put('W');

    myFile << "Hello, From Atharv!\n";

    char a = 48;
    myFile << (int)a;

    myFile.seekp(0);
    myFile << " ";
    myFile.seekp(32);
    myFile << "!!!!!!";
    myFile.seekp(-2,std::ios_base::end);
    myFile << 42;

    return 0;
}