#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <string>

struct Package{
    int priority;
    std::string name;
};

bool cmp(const Package& a, const Package& b){
    return a.priority < b.priority;
}

void printVector(const std::vector<int>& v){
    for(auto elem : v){
        std::cout << elem << ",";
    }
    std::cout << std::endl;
}

void printVectorPackages(const std::vector<Package>& v){
    for(auto elem : v){
        std::cout << elem.priority << "-" << elem.name << ",";
    }
    std::cout << std::endl;
}

int main(){

    std::vector<Package> packages{{3,"atharv"}, {7,"omkar"}, {9,"vivek"}, {5, "mahind"},};

    printVectorPackages(packages);

    std::make_heap(packages.begin(), packages.end(),cmp);
    printVectorPackages(packages);

    std::sort_heap(packages.begin(), packages.end(),cmp);
    printVectorPackages(packages);

    /*
    std::vector v{1,3,8,2,9,7,6,11,-7,42};
    printVector(v);
    std::make_heap(v.begin(),v.end());
    printVector(v);
    

    while(!v.empty()){
        auto elem = v.front();
        std::pop_heap(v.begin(), v.end());
        v.pop_back();
        std::cout << elem << std::endl;
    }

    printVector(v);
    */


    return 0;
}