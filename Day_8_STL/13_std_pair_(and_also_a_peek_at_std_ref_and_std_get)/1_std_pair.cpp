#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <functional>
/*
template<typename First, typename Second>
struct mypair{
    First key;
    Second value;
}
*/

int main() {

    using student_t = std::pair<int, std::string>;

    std::vector<student_t> students;
    for(int i=0; i<5; i++){
        std::pair<int, std::string> student(i, "atharv");
        students.push_back(student);
    }

    for(auto elements : students){
        std::cout << elements.first << "," << elements.second << std::endl;
    }

    long value = 100L;
    auto newpair = std::make_pair(std::ref(value), 10.0f);
    value = 150L;
    std::cout << newpair.first << std::endl;

    std::cout << std::get<float>(newpair) << std::endl;

    return 0;
}