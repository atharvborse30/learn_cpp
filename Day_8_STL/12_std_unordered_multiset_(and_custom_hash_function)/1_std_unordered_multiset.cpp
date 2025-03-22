#include <iostream>
#include <unordered_set> 
#include <algorithm>

// Example helper class
struct Custom {
    int field1;
    int field2;

    // Constructor
    Custom(int _field1, int _field2) : field1(_field1), field2(_field2) {}

    // Comparison
    bool operator==(const Custom& rhs) const {
        return (field1 == rhs.field1 && field2 == rhs.field2);
    }

    // Helper function to print
    void print() const {
        std::cout << "(" << field1 << "," << field2 << ") = " << field1 + field2 << std::endl;
    }
};

// Generator functions
Custom gen() {
    static int i = 0;
    static int j = 0;
    return Custom(++i, ++j);
}

Custom gen_duplicates() {
    static int i = 0;
    static int j = 0;
    return Custom(++i, ++j);
}

// Hash function for Custom struct
struct hash {
    std::size_t operator()(const Custom& c) const noexcept {
        return std::hash<int>()(c.field1) ^ (std::hash<int>()(c.field2) << 1);
    }
};

// Helper function to print the unordered_multiset elements
void PrintUnorderedBuckets(const std::unordered_multiset<Custom, hash>& b) {
    for (size_t i = 0; i < b.bucket_count(); ++i) {
        std::cout << "===== bucket " << i << " ==== " << std::endl;
        for (auto it = b.begin(); it != b.end(); ++it) {
            if (b.bucket(*it) == i) {  // Ensure we only print elements of the current bucket
                it->print();
            }
        }
    }
}

int main() {
    std::unordered_multiset<Custom, hash> o_multi;

    // Insert elements into the unordered_multiset
    std::generate_n(std::inserter(o_multi, o_multi.begin()), 5, gen);
    std::generate_n(std::inserter(o_multi, o_multi.begin()), 5, gen_duplicates);

    // Print all elements
    std::for_each(o_multi.cbegin(), o_multi.cend(), [](const Custom& c) {
        c.print();
    });

    std::cout << std::endl;
    std::cout << "size    : " << o_multi.size() << std::endl;
    std::cout << "buckets : " << o_multi.bucket_count() << std::endl;
    std::cout << "load    : " << o_multi.load_factor() << std::endl;

    PrintUnorderedBuckets(o_multi);

    return 0;
}
