/*
    A priority queue is a container adaptor that provides constant time lookup of the largest (by default) element, at the expense of logarithmic insertion and extraction.

    A user-provided Compare can be supplied to change the ordering, e.g using std::greater<T> would cause the 
    smallest element to appear as the top().

    Working with a priority_queue is similar to managing a heap in some random access container, with the benefit of not being able to accidentally invalidate the heap.
*/

#include <iostream>
#include <queue>  // priority_queue
#include <vector>

struct Edge {
    int v1, v2;
    Edge(int _v1, int _v2) : v1(_v1), v2(_v2) {}  // Constructor

    friend std::ostream& operator<<(std::ostream& os, const Edge& e);
};

// Corrected function name and variable references
std::ostream& operator<<(std::ostream& os, const Edge& e) {
    os << e.v1 << "," << e.v2;
    return os;
}

// Comparator for priority queue
struct EdgeCompare {
    bool operator()(const Edge& e1, const Edge& e2) const {
        int e1Sum = e1.v1 + e1.v2;
        int e2Sum = e2.v1 + e2.v2;
        return e1Sum < e2Sum;  // Min-heap behavior (smallest sum is lowest priority)
    }
};

int main() {
    // Using std::vector instead of std::deque
    std::priority_queue<Edge, std::vector<Edge>, EdgeCompare> edges;
    
    // Adding elements to the priority queue
    Edge e1(1,1);
    Edge e2(2,2);
    Edge e3(3,3);

    edges.push(e1);
    edges.push(e2);
    edges.push(e3);

    // Printing and popping elements
    while (!edges.empty()) {
        Edge topEdge = edges.top();
        std::cout << topEdge << std::endl;
        edges.pop();
    }

    // std::priority_queue<int> priorityQueue;
    // priorityQueue.push(32);
    // priorityQueue.push(33);
    // priorityQueue.push(31);

    // while(!priorityQueue.empty()){
    //     int t = priorityQueue.top();
    //     std::cout << "ordering: " << t << std::endl;
    //     priorityQueue.pop();
    // }

    return 0;
}
