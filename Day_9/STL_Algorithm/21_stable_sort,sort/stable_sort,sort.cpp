#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>

struct Student{
    int age;
    int id;
};

bool cmp(const Student& a, const Student& b){
    return a.id < b.id;
}

template<class T>
using MyType = std::vector<T>;
// Note : std::list has a 'member function' for sorting.

int main(){

    //std::vector<int>
    //MyType<int> c{1,7,5,2,-7,4,-100,500};
    MyType<Student> c;
    c.emplace_back(27,1001);
    c.emplace_back(18,1002);
    c.emplace_back(49,1003);
    std::stable_sort(begin(c), end(c),cmp);

    //std::sort(begin(c), end(c), std::greater<int>());

    for(auto elem : c){
        std::cout  << elem.id << " | " << elem.age << std::endl;
    }
    std::cout << std::endl;

    return 0;
}