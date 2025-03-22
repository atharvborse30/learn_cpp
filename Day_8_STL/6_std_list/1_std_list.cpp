#include <iostream>
#include <list>

void printList(const std::list<int>& list){
    std::cout << "================\n";
    for(const auto& e : list){
        std::cout << e << ",";
    }
    std::cout << std::endl;
}

int main(){

    std::list<int> myList; 
    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);
    myList.push_back(4);

    printList(myList);

    // pos - an iterator to where we want to insert 'before'
    // value - (in this case, '0')
    myList.insert(begin(myList), 0);
    myList.insert(end(myList),5);

    // now we will advance our iterator 
    // a specific number of steps
    auto it = cbegin(myList);
    it = std::next(it, myList.size()/2);
    myList.insert(it, 9);

    printList(myList);
    std::cout << std::endl;

    it = cbegin(myList);
    std::advance(it, myList.size()/2);
    std::cout << "middle is: " << *it << std::endl;

    myList.sort();
    printList(myList);

    myList.reverse();
    myList.remove_if([](int n) { return n <1; });
    printList(myList);

    std::cout << std::endl;

    for(std::list<int>::reverse_iterator it = myList.rbegin(); it != myList.rend(); ++it) {
        std::cout << "reverse: " << *it << std::endl;
    }

    std::cout << std::endl;

    // setup an experiment to merge two lists
    myList.reverse();
    std::list<int> list2{2,4,6,8,10};
    myList.merge(list2);

    printList(myList);
    printList(list2); // will not print anything bcz we have merged (moved the list2 to myList)

    std::cout << std::endl;

    // Splice example
    std::list<int> list3{15,25,35,45};
    auto list3_iter = list3.begin();
    std::advance(list3_iter, 2);
    myList.splice(end(myList), list3);
    //myList.splice(end(myList), list3, list3_iter, end(list3));
    printList(myList);
    printList(list3); // will not print anything bcz we have transferred list3 to myList

    return 0;
}