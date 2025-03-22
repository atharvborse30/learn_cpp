/*
    std::stack - a container adaptor that gives the programmer the functionality of a stack - specifically, Last-in, First-out (LIFO) data structure.

    stack pushes and pops the element from the back of the underlying container, known as top of the stack.

    push - adds new data
    pop - removes data
    top - peeks at top element, or the last thing inserted
*/

#include <iostream>
#include <stack>
#include <vector>
#include <list>

void printStack(std::stack<int,std::vector<int>> myStack){

    // empty() check whether the underlying container is empty
    while (!myStack.empty()){
        int result = myStack.top();
        myStack.pop();
        std::cout << "result: " << result << std::endl;
    }
}

int main(){

    std::stack<int,std::vector<int>> myStack({-3,-2,-1,0});

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    std::cout << "top of my stack: " << myStack.top() << std::endl;

    int holdOntoTopItem = myStack.top();

    myStack.pop(); // removes the top element

    std::cout << "top of my stack: " << myStack.top() << std::endl;

    printStack(myStack);

    return 0;
}