#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

/*
    set_difference :-
-------------------------------------
    A = 1,2,3,4,5
    B = 6,7
    A.B = 1,2,3,4,5

    set_symmetric_difference :-
-------------------------------------
    A = 1,2,3,4,5
    B = 6,7
    A + B = 1,2,3,4,5,6,7
*/

void printList(const std::list<int>& l){
    for(auto elem : l){
        std::cout << elem << ",";   
    }
    std::cout << std::endl;
}

int main(){

    std::vector A1{1,2,3};
    std::vector B1{1};
    std::list<int> output1;
    std::list<int> output2;

    std::set_difference(A1.begin(), A1.end(), B1.begin(), B1.end(), std::back_inserter(output1));
    printList(output1);

    std::set_symmetric_difference(A1.begin(), A1.end(), B1.begin(), B1.end(), std::back_inserter(output2));
    printList(output2);

    std::cout << std::endl;

    /////////////////////////////////////////////
    std::vector A3{1,2,3,4,5};
    std::vector B3{6,7};
    std::list<int> output3;
    std::list<int> output4;

    std::set_difference(A3.begin(), A3.end(), B3.begin(), B3.end(), std::back_inserter(output3));
    printList(output3);

    std::set_symmetric_difference(A3.begin(), A3.end(), B3.begin(), B3.end(), std::back_inserter(output4));
    printList(output4);

    std::cout << std::endl;

    ////////////////////////////////////////////
    std::vector A5{1,2,3,4,5,5,5,5};
    std::vector B5{5,6,7};
    std::list<int> output5;
    std::list<int> output6;

    std::set_difference(A5.begin(), A5.end(), B5.begin(), B5.end(), std::back_inserter(output5));
    printList(output5);

    std::set_symmetric_difference(A5.begin(), A5.end(), B5.begin(), B5.end(), std::back_inserter(output6));
    printList(output6);

    return 0;
}