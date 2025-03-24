#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm> //for_each

struct dice_rolls{
    int low,high;
};

dice_rolls fun(const dice_rolls& a, const dice_rolls& b){
    dice_rolls roll;
    roll.low = a.low + b.low;
    roll.high = a.high + b.high;
    return roll;
}

// partial_sum : computes the partial sum of a range of elements

int main() {

    std::vector<int> v{1,2,3,4,5};
    std::vector<int> result(5);

    std::partial_sum(v.begin(), v.end(),result.begin());
    // std::partial_sum(v.begin(), v.end(),result.begin(), std::multiplies<>());

    std::for_each(result.begin(), result.end(),[](auto elem){
        std::cout << elem << ",";
    });
    std::cout << std::endl << std::endl;



    std::vector<dice_rolls> v2{{1,3},{4,6},{5,6},{2,4},{1,6}};
    std::vector<dice_rolls> result2(5);

    std::partial_sum(v2.begin(), v2.end(),result2.begin(),fun);
    // std::partial_sum(v.begin(), v.end(),result.begin(), std::multiplies<>());

    std::for_each(result2.begin(), result2.end(),[](auto elem){
        std::cout << elem.low << "," << elem.high << std::endl;
    });
    std::cout << std::endl;

    return 0;
}