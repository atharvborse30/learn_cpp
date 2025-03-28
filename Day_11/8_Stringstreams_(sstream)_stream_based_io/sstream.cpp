// sstream :

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

int main(int argc, char* argv[]){

    // unerlying storage
    std::string strbuf = "Hi to all of YOU";

    // setup our stringstream with underlying buffer
    std::stringstream ss(strbuf);

    // output the contents at any time
    std::cout << ss.str() << std::endl;

    //extract information out of our string stream
    // note: this is handy for parsing a line of text
    std::string chunk;
    while(ss >> chunk){
        std::cout << "chunk: " << chunk << std::endl;
        std::cout << ss.tellg() << std::endl;
    }

    // in the mean time , back to the end of our 'strbuf'
    // that's effectively what seekg is doing
    ss.clear();
    ss.seekg(0, std::ios_base::beg);
    std::cout << ss.fail() << std::endl;

    ss.str("");
    ss << " something else at the end.";
    while(ss >> chunk){
        std::cout << "reading added chunks: " << chunk << std::endl;
    }

    // Reading from a file
    // and parsing the contents
    // (The common use case of how I use <sstream>)
    std::ifstream inputFile(argv[1]);
    // hold each line from the file as we read it in
    std::string line;
    while(std::getline(inputFile, line)){
        // For each line , we want to parse it
        // thus we treat each line as a stringstream
        std::stringstream ss_line(line);
        // parse each word from that line
        std::string chunk2;
        while(ss_line >> chunk2){
            std::cout << chunk2 << ",";
        }
    }
    inputFile.close();

    return 0;
}