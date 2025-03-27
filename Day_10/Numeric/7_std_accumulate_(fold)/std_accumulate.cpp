// 

#include <iostream>
#include <vector>
#include <numeric>

int main(){

    std::vector<int> v = {1,2,3,4,5,6,7,8};

    int init = 0;
    for(size_t i=0; i < v.size(); i++){
        init += v[i];
    }
    std::cout << "sum: " << init << std::endl;

    int result = 0;
    int current = 0;
    for(size_t i=0; i < v.size(); i++){
        current = v[i] + v[i+1];
        result += current;
    }
    std::cout << "result: " << result << std::endl;

    std::cout << "accumulate: " << std::accumulate(v.begin(), v.end(), 0) << std::endl;
    std::cout << "accumulate: " << std::accumulate(v.begin(), v.end(), 1, std::multiplies<>()) << std::endl;

    std::vector<double> v2 = {1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1};
    std::cout << "v2 accumulate: " << std::accumulate(v2.begin(), v2.end(), 0.0) << std::endl;

    return 0;
}