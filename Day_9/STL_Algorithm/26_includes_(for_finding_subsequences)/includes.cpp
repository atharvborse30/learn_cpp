#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

struct Custom{
    int id;
    char grade;
};

bool cmp(const Custom& a, const Custom& b){
    return (int)a.grade + a.id < (int)b.grade + b.id;
}

int main(){

    std::vector v1{1,3,5,7,9};
    std::vector v2{5,7};

    auto result = std::includes(v1.begin(), v1.end(), v2.begin(), v2.end());

    std::cout << std::boolalpha;
    std::cout << result << std::endl;

    std::vector<Custom> v3{{1,'a'},{2,'a'}};
    std::vector<Custom> v4{{2,'a'}};

    auto result2 = std::includes(v3.begin(), v3.end(), v4.begin(), v4.end(), cmp);
    std::cout << result2 << std::endl;


    std::list v5{1,1,1,3,5,7,9};
    std::list v6{1,1,1};
    auto result3 = std::includes(v5.begin(), v5.end(), v6.begin(), v6.end());
    std::cout << result3 << std::endl;

    return 0;
}