#include <iostream>
#include <vector>
#include <algorithm>

struct Monster{
    int power;
    int strength;
};

bool monster_cmp(const Monster& a, const Monster& b){
    int valueA = a.power * a.strength;
    int valueB = b.power * b.strength;
    return valueA < valueB;
}

std::ostream& operator<<(std::ostream& os, const Monster& m){
    return os << "Monster: " << m.power << "," << m.strength;
}

int main(){

    /*
    std::vector<int> v{1,3,5,7,6,4,2,0,-2,6};

    auto minimum = std::min_element(v.begin(), v.end());
    std::cout << "Min_element: " << *minimum << std::endl;

    auto maximum = std::max_element(v.begin(), v.end());
    std::cout << "Max_element: " << *maximum << std::endl;
    */

    std::vector<Monster> v{{7,2},{5,7},{10,11}};
    auto minimum = std::min_element(v.begin(), v.end(),monster_cmp);
    auto maximum = std::max_element(v.begin(), v.end(),monster_cmp);
    std::cout << "Min_element: " << *minimum << std::endl;
    std::cout << "Max_element: " << *maximum << std::endl;

    return 0;
}