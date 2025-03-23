// easier removal with container std::erase(non-member function) and erase_if

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>
#include <list>

int main() {

    std::vector<std::string> people{"atharv", "adam", "michael", "joe", "mike","joe","joe"};

    // Older style c++17 and before
    auto find_mike = std::find(begin(people), end(people), "mike");
    people.erase(find_mike);

    // newer style -- non member functioni in c++20 (using a value to find a match with operator==)
    size_t joes_removed = std::erase(people, "joe");

    // newer style -- non member function in c++20 (using predicate)
    size_t people_with_a_removed = std::erase_if(people,[](auto e){
        return e[0] == 'a';
    });

    std::cout << "joe's removed : " << joes_removed << std::endl;
    std::cout << "a names removed : " << people_with_a_removed << std::endl;


    for(const auto& elem : people){
        std::cout << "people remains: " << elem << std::endl;
    }

    return 0;
}