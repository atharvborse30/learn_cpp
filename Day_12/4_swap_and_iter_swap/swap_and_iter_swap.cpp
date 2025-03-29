#include <iostream>
#include <vector>

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
    return;
}

int main(){

    int a = 1;
    int b = 2;
    swap(a,b);

    std::cout << "a: " << a << ", " << "b: " << b << std::endl;

    std::vector v_odds{1,3,5,7};
    std::vector v_evens{2,4,6,8,10,12,14};

    std::swap(v_odds, v_evens);
    std::swap(v_odds, v_evens);

    auto odds_iter = v_odds.begin()+1;
    auto evens_iter = v_evens.begin()+1;
    std::iter_swap(odds_iter, evens_iter);


    auto print = [](auto c){
        for(auto e : c){
            std::cout << e << " ";
        }
        std::cout << std::endl;
    };

    print(v_odds);
    print(v_evens);

    return 0;
}