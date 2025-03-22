#include <iostream>
#include <forward_list>

void printList(const std::forward_list<int>& list){
    std::cout << "===============\n";
    for(const auto& e : list){
        std::cout << e << ",";
    }
    std::cout << std::endl << std::endl;
}

void push_back(std::forward_list<int>& list, int val){
    // insert at the end
    auto pos = begin(list);
    int distance = std::distance(begin(list), end(list));
    std::advance(pos,distance-1);
    list.insert_after(pos,val);
}

int main(){

    // create a forward_list, which is more lightweight
    // and efficient than a list (if we are just traversing forwards).
    std::forward_list<int> myList{1,2,3,4};

    myList.push_front(0);
    printList(myList);
    
    // WARNING : You might just want to use a 
    //           std::list, but this is good 
    //           practice, showing how lightweight
    //           forward_list is.
    push_back(myList, 5);
    printList(myList);
    push_back(myList, 6);
    printList(myList);

    myList.push_front(-7);
    myList.push_front(-5);
    myList.sort();
    printList(myList);

    std::forward_list<int> list2{-2,0,3,4,5};
    myList.merge(list2);
    printList(myList);
    printList(list2);  // will not print anything bcz it gets transferred

    myList.unique(); // removes duplicates
    printList(myList);

    std::forward_list<int> list3{66,77,88,99};
    auto list3_end = std::next(begin(list3), 3);
    //myList.splice_after(myList.before_begin(), list3);
    myList.splice_after(myList.before_begin(), list3, list3.before_begin(), list3_end);
    printList(myList);

    return 0;
}