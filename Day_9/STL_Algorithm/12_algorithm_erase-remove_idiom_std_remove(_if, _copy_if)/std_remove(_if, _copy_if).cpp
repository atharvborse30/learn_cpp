#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>

int main() {

    using DataType = std::list<int>;

    DataType collection{1,3,5,7,8,10,12,12,12};


    // =============================================
    //        erase-remove idiom
    // If we truly want to 'erase' then we capture the 
    // 'new end poin' of our std::remove operation, which shifts
    // all the 'values' that match (in this case 12) what we want to
    // remove , to the end.
    auto newEnd = std::remove(begin(collection), end(collection),12);

    // Now perform the actual removal of the elements
    collection.erase(newEnd, end(collection));

    for(auto elem : collection){
        std::cout << elem << std::endl;
    }

    std::cout << "================\n";


    DataType collection2{1,2,4,3,8,5,7,6};
    // Remove_if 'sort of' eliminated our first element
    auto newEnd2 = std::remove_if(begin(collection2),end(collection2), [](auto a){ return a%2==0; });
    //But the proper way to erase elements, is to erase-remove_if
    collection2.erase(newEnd2, end(collection2));

    for(auto elem : collection2){
        std::cout << elem << std::endl;
    }

    std::vector<std::string> people{"atharv", "adam", "michael", "joe", "mike"};
    std::vector<std::string> target(people.size()); // where I'll copy stuff into
    auto newEnd3 = std::remove_copy_if(begin(people), end(people),begin(target), [](std::string s){
        return s[0] != 'm';
    });

    std::cout << "====================\n";
    for(const auto& elem : target){
        std::cout << "people starting with 'm': " << elem << std::endl;
    }

    std::cout << std::endl;
    // keyword -- we're 'copying' so hopefully not destroying 'people' vector
    for(const auto& elem : people){
        std::cout << "people remains: " << elem << std::endl;
    }

    return 0;
}