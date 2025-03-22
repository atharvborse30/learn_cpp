#include <iostream>
#include <string>
#include <map>
#include <unordered_map>

struct Edge {
    unsigned long v1;
    unsigned long v2;

    Edge() : v1(-1), v2(-1) {}

    Edge(unsigned long _v1, unsigned long _v2) : v1(_v1), v2(_v2) {}

    // Implement equality
    bool operator==(const Edge& rhs) const{
        return (v1==rhs.v1 && v2==rhs.v2);
    }

    friend std::ostream& operator<<(std::ostream& os, const Edge& e);
};

std::ostream& operator<<(std::ostream& os, const Edge& e) {
    os << e.v1 << "," << e.v2;
    return os;
}

struct MyHash{
    // 'Edge' is the key for this hash function
    std::size_t operator()(const Edge& e) const noexcept{
        return e.v1 + e.v2;
    }
};


int main() {

    std::unordered_multimap<Edge, std::string, MyHash> mymap2;
    Edge edgeTest(100,100);
    mymap2.insert({edgeTest, "edgeTest"});

    // Key is a 'string', value is 'Edge'
    Edge e1(1,2);
    Edge e2(5,4);
    Edge e3(3,3);
    using StringEdge = std::unordered_multimap<std::string, Edge>;
    StringEdge mymap = {{"s1", e1},{"s2",e2},{"s3", e3}};
    

    Edge e4(1,2);
    mymap.insert({"s4", e1});
    mymap.insert({"s1", e1});
    mymap.insert({"s1", e1});
    mymap.insert({"s1", e1});
    mymap.insert({"s1", e1});
    mymap.insert({"s1", e1});

    // Remove all specific keys matching
    mymap.erase("s1");
    // Remove a key using an iterator
    StringEdge::iterator begin = mymap.begin();
    mymap.erase(begin);

    Edge e5(99,100);
    //Add a new entry or update an existing one
    mymap.insert({"s2", e4});
    mymap.insert({"s3", e4});
    mymap.insert({"s4", e2});
    mymap.insert({"s4", e3});
    mymap.insert({"s4", e4});

    std::cout << "number of s4's : " << mymap.count("s4") << std::endl;

    // returns a pair of iterators
    auto range = mymap.equal_range("s4");
    auto start = range.first;
    auto copy = start;
    start++;
    mymap.erase(start);

    auto end = range.second;
    for(; start != end; start++){
        std::cout << start->first << " | " << start->second << std::endl;
    }

    std::cout << "number of s4's : " << mymap.count("s4") << std::endl;

    std::cout << "=================\n";

    if(mymap.contains("s5")){
        std::cout << "we contain s5" << std::endl;
    }

    // check if an entry exists
    if(mymap.find("s6") != mymap.end()){
        std::cout << "we contain s6" << std::endl;
    }

    // Structured binding
    for(auto const& [key,value] : mymap){
        std::cout << key << " | " << value << std::endl;
    }

    // for(auto const& pair : mymap){
    //     std::cout << pair.first << " | " << pair.second << std::endl;
    // }

    // for(StringEdge::iterator it = mymap.begin(); it!=mymap.end(); ++it){
    //     std::cout << it->first << " | " << it->second << std::endl;
    // }

    // for(std::unordered_map<std::string, Edge>::iterator it = mymap.begin(); it!=mymap.end(); ++it){
    //     std::cout << it->first << " | " << it->second << std::endl;
    // }

    // statistics of our unordered_map hastable
    std::cout << "bucket_count: " << mymap.bucket_count() <<std::endl<< "load_factor : " << mymap.load_factor() << std::endl;

    return 0;
}
