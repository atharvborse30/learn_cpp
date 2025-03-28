#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <cstring>

int main(){

    // Two arrays, two different types of data
    char char_array[256];           // 256 1-byte chars
    std::array<int, 256> int_array; // 256 4-byte ints (on most system...)
    //std::array<int32_t, 256> int_array;  //This is a little better

    // populate with some 'sample' data
    for(size_t i=0; i <int_array.size(); ++i){
        char_array[i] = 99;
        int_array[i] = i;
    }

    // Text-based files we are writing out to
    std::fstream char_array_file("chardata.txt", std::ios::out);
    std::ofstream int_array_file("intdata.txt");

    for(size_t i=0; i <int_array.size(); ++i){
        char_array_file << char_array[i] <<" ";
        int_array_file << int_array[i] <<" ";
    }

    // Remember to close your files, before you read from them (i.e : only 1 open file handle
    // to the same file should be open at a given time for reads and/or writes).
    {
    //Binary files we are writing out to
    std::fstream char_binary_file("chardata.bin");
    std::ofstream int_binary_file("intdata.bin");

    // One 'write' operation, rather than looping
    char binary file.write(char array, 256*sizeof(char));
    int binary file.write(reinterpret_cast<char*>(int array.data()), 256*sizeof(int));
    }
    //otherwise remove curly braces from above and uncomment below line , will work same
    //int_binary_file.close();

    // Now let's read back, the binary data, to see if it was stored correctly.
    std::ifstream read_binary_file("intdata.bin");

    int readData[256];
    read_bianry_file.read(reinterpret_cast<char*>(readData), 256*sizeof(int));

    for(size_t i=0; i<256; ++i){
        std::cout << readData[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
