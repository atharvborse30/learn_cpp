#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main(){

    

    std::vector<int> v1{1,4,7,2,-5,8,5,3,10,11,12};
    //                  1,4,2,-5  3,5,8,10,11,12
    auto p = [](int a){ return a<6; };

    if(!std::is_partitioned(v1.begin(), v1.end(),p)){
        std::partition(v1.begin(), v1.end(),p);
    }
    
    for(auto elem : v1){
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    auto point = std::partition_point(v1.begin(), v1.end(), p);

    auto d = std::distance(v1.begin(), point);
    std::cout << "d : " << d << std::endl;

    std::cout << "partition point: " << *point << std::endl;

    std::cout << "v1.size() : " << v1.size() << std::endl;
    std::cout << "v1.size()/2 : " << v1.size()/2 << std::endl; 
    
    std::vector<int> left;
    std::vector<int> right;
    // left.reserve... // exercise reserve memory
    std::partition_copy(v1.begin(), v1.end(), std::back_inserter(left), std::back_inserter(right),p);

    for(auto elem : left){
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    for(auto elem : right){
        std::cout << elem << " ";
    }
    std::cout << std::endl;


    return 0;
}