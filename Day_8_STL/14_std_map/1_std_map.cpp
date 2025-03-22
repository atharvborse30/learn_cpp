#include <iostream>
#include <string>
#include <map>

struct Edge {
    unsigned long v1;
    unsigned long v2;

    Edge() : v1(-1), v2(-1) {}

    Edge(unsigned long _v1, unsigned long _v2) : v1(_v1), v2(_v2) {}

    friend std::ostream& operator<<(std::ostream& os, const Edge& e);
};

std::ostream& operator<<(std::ostream& os, const Edge& e) {
    os << e.v1 << "," << e.v2;
    return os;
}

// Comparator function
struct EdgeCompare {
    bool operator()(const Edge& lhs, const Edge& rhs) const {
        return (lhs.v1 + lhs.v2) < (rhs.v1 + rhs.v2);
    }
};

int main() {
    std::map<std::string, Edge> mymap;
    using StringEdge = std::map<std::string, Edge>;

    // Created our first 'edge1'
    mymap["edge1"] = Edge(0, 0);
    // Create another edge
    mymap["edge7"] = Edge(7, 7);
    // Updating our edge if it exists
    mymap["edge1"] = Edge(1, 1);
    std::cout << mymap.at("edge1") << std::endl;

    mymap.insert(std::make_pair("edge2", Edge(2L, 2L)));
    std::cout << mymap.at("edge2") << std::endl;

    // Structured binding for insertion
    const auto [it, success] = mymap.insert(std::make_pair("edge3", Edge(3, 3)));
    std::cout << "Edge 3 was added: " << success << std::endl;
    std::cout << it->first << ": " << success << std::endl;

    // Classic iteration
    for (StringEdge::iterator it = mymap.begin(); it != mymap.end(); ++it) {
        std::cout << it->first << std::endl;
    }
    std::cout << std::endl;

    // Range-based loops
    for (const auto& keys : mymap) {
        std::cout << keys.first << ":" << keys.second << std::endl;
    }
    std::cout << std::endl;

    if (mymap.find("edge3") != mymap.end()) { // Fix: C++17 compatible check
        mymap.erase("edge3");
    }

    // Range-based loops (structured bindings)
    for (const auto& [keys, values] : mymap) {
        std::cout << keys << ":" << values << std::endl;
    }

    std::map<Edge, std::string, EdgeCompare> mymap2;

    Edge e1(8, 8);
    Edge e2(0, 8);
    mymap2[e1] = "test1";
    mymap2[e2] = "test2";

    // Range-based loops (structured bindings)
    for (const auto& [keys, values] : mymap2) {
        std::cout << keys << ":" << values << std::endl;
    }

    return 0;
}
