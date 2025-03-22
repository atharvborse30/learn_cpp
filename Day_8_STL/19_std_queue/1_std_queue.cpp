/*
    std::queue : First-In, First-Out (FIFO) data structure
    std::queue is a container adaptor that gives the programmer the functionality of a queue - specifically,
    a fifo data structure.

    queue pushes the elements on the back of the underlying container and 
    pops them from the front.

    pushes element at back (push inserts element at the end)
    pops element from front (pops remove the first element)
*/

#include <iostream>
#include <queue>
#include <list>

int main() {

    std::queue<int, std::list<int>> myQueue({-3,-2,-1});
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    std::cout << "front: " << myQueue.front() << std::endl;
    std::cout << "back: " << myQueue.back() << std::endl;

    myQueue.pop();
    std::cout << "front: " << myQueue.front() << std::endl;
    std::cout << "size: " << myQueue.size() << std::endl;

    return 0;
}