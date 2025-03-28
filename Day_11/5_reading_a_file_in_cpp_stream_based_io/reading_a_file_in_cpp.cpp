#include <iostream>
#include <fstream>  // read/write file streams
#include <filesystem>
#include <string>

int main(){
    // Example 1 -- basic loop to read all data
    //creating a file (that we'll read from)
    {
        std::ofstream outputFile("myFile.txt");
        outputFile << "Hi, my name is Atharv";
        outputFile << "Some more text";
        outputFile.close();
    }

    // Reading Files
    {
        std::ifstream inputFile("myFile.txt");
        if(inputFile.is_open() && std::filesystem::exists("myFile.txt")){
            std::string line;
            while(std::getline(inputFile, line)){
                std::cout << "read: " << line << std::endl;
            }   
        }else{
            std::cout << "file does not exist" << std::endl;
        }
    }

    // Example 2
    {
        std::ofstream outputFile("myFile2.txt");
        outputFile << "Hi, my name is Atharv";
        outputFile << "2 3 4\n";
        outputFile << "5 6 7\n";
        outputFile << "8 9 10\n";
        outputFile.close();
    }

    {
        std::ifstream inputFile("myFile2.txt");
        int x,y,z;
        while(inputFile >> x >> y >> z){
            std::cout << "read: " <<  x << "," << y << "," << z << std::endl;
        }   
    }


    // Example 3
    {
        std::ifstream inputFile("myFile.txt");
        inputFile.seekg(-5, std::ios::end);

        char buf[5];
        inputFile.read(buf, 5);
        std::cout << "Last 5 characters are: " << buf << std::endl;
    }

    return 0;
}