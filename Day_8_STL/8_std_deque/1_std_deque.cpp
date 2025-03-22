// deque :- double ended queue
// can insert elements at the front or at the end
// queue :- first-in first-out (FIFO)
// deque is similar to a vector , but limited in insertion/removal to front & back.

#include <iostream>
#include <deque>
#include <algorithm>
#include <cstdio>

void printDeque(const std::deque<int>& data){
    std::for_each(std::begin(data), std::end(data), [](const int& n){ std::puts(std::to_string(n).c_str()); });
}

int main(){

    std::deque<int> deque1{1,2,3,4};

    printDeque(deque1);

    std::cout << std::endl;

    std::cout << deque1[0] << std::endl;
    std::cout << std::endl;

    std::deque<int>::iterator it = deque1.begin();
    // equivalent to above
    //auto it = deque1.begin();

    it++;
    it++;
    deque1.insert(it,500);
    printDeque(deque1);

    std::cout << std::endl;

    auto end = deque1.end();
    int distance = std::distance(deque1.begin(), end);
    it = deque1.begin();
    std::advance(it, distance/2);
    deque1.insert(it, 7);
    printDeque(deque1);

    std::cout << std::endl;

    deque1.push_back(123);
    deque1.push_front(999);
    printDeque(deque1);

    return 0;
}