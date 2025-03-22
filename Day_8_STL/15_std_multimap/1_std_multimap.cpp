#include <iostream>
#include <string>
#include <map>

int main(){

    using stringIntMultiMap = std::multimap<std::string,int>;
    std::multimap<std::string, int> mymultimap = {{"atharv",2},{"atharv",7}};

    mymultimap.insert(std::pair{"atharv", 100});
    mymultimap.insert(std::pair{"sanket", 110});
    mymultimap.insert(std::pair{"vivek", 101});
    mymultimap.insert(std::pair{"omkar", 102});
    mymultimap.insert(std::pair{"pratik", 107});
    mymultimap.insert(std::pair{"adarsh", 103});

    //auto f = mymultimap.find("atharv");
    // equivalent to above line
    //std::multimap<std::string,int>::iterator f = mymultimap.find("atharv");
    stringIntMultiMap::iterator f = mymultimap.find("atharv");
    // we can erase a specific element that is found 
    std::cout << mymultimap.count("atharv") << std::endl;
    mymultimap.erase(f);
    std::cout << mymultimap.count("atharv") << std::endl;
    //erase will erase all matching 'keys' if a key is provided
    //mymultimap.erase("atharv");

    for(const auto& element : mymultimap){
        std::cout << element.first << "," << element.second << std::endl;
    }

    std::cout << "===========================" << std::endl;

    auto firstEntry = mymultimap.lower_bound("atharv");
    auto lastEntry = mymultimap.upper_bound("atharv");
    for( ; firstEntry != lastEntry; ++firstEntry){
        std::cout << firstEntry->first << "," << firstEntry->second << std::endl;
    }

    std::cout << "===========================" << std::endl;
    // More efficient way of getting pair of iterators
    // start_end is a pair of iterators representing the lower and upper bound
    std::cout << "efficient way of getting pair of iteratos\n";
    auto start_end = mymultimap.equal_range("atharv");
    for(auto it = start_end.first; it != start_end.second; it++){
        std::cout << it->first << "," << it->second << std::endl;
    }

    return 0;
}