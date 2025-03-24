#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

void print_v(const std::vector<int>& v){
    for(size_t idx = 0; idx < v.size(); idx++){
        std::cout << v[idx] << " \t| " << &v[idx] << std::endl;
        // std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main(){

    std::vector<int> v{1,9,5,5,5,7,16,17,19,21,57,45,4,2};
    if(!std::is_sorted(v.begin(),v.end())){
        std::sort(v.begin(),v.end());
    }

    print_v(v);
    

    auto found = std::binary_search(v.begin(),v.end(),5);
    auto lower = std::lower_bound(v.begin(),v.end(),5);
    auto upper = std::upper_bound(v.begin(),v.end(),5);

    std::cout << std::boolalpha;
    std::cout << "found: " << found << std::endl;
    std::cout << "lower: " << *lower << std::endl;
    std::cout << "upper: " << *upper << std::endl;
    std::cout << std::endl;
    std::cout << "lower address: " << &*lower << std::endl;
    std::cout << "upper address: " << &*upper << std::endl;

    


    return 0;
}