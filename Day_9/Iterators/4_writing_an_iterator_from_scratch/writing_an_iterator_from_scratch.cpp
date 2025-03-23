#include <iostream>
#include <vector>
#include <algorithm>
#include <cstddef>

// Fixed size array that will allocate memory on the heap
template <typename T>
class FixedSizeArray {
    private:
        
        struct iterator {
            // Properties of our iterator
            using iterator_category = std::forward_iterator_tag;
            using difference_type = std::ptrdiff_t;
            using value_type = T;
            using pointer = T*;
            using reference = T&;

            // Constructor
            iterator(pointer ptr) : mPtr(ptr) {}

            // 'Dereference' unary operator
            reference operator*() const {
                return *mPtr;
            }

            // Pointer access
            pointer operator->() {
                return mPtr;
            }

            // Pre-increment (++it)
            iterator& operator++() {
                ++mPtr;
                return *this;
            }

            // Post-increment (it++)
            iterator operator++(int) {
                iterator tmp = *this;
                ++(*this);
                return tmp;
            }

            friend bool operator==(const iterator& a, const iterator& b) {
                return a.mPtr == b.mPtr;
            }

            friend bool operator!=(const iterator& a, const iterator& b) {
                return a.mPtr != b.mPtr;
            }

            private:
                pointer mPtr;
        };

    private:
        T* mData;  // Underlying data
        size_t mCapacity;  // Capacity of our data structure

    public:
        // Constructor
        // Initialize our memory
        FixedSizeArray(size_t capacity) : mCapacity(capacity) {
            mData = new T[capacity]{};
        }

        // Destructor
        ~FixedSizeArray() {
            delete[] mData;
        }

        T& operator[](size_t index) {
            return mData[index];
        }

        size_t capacity() const {
            return mCapacity;
        }

        
        iterator begin() {
            return iterator(mData);
        }

        // Observe we're '1' past or otherwise beyond our container
        iterator end() {
            return iterator(mData + mCapacity);
        }
};


int main() {

    // Using T = FixedSizeArray<int>
    using T = FixedSizeArray<int>;

    T c(5);

    // C-style loop
    // nothing wrong with this...
    std::cout << "C-Style loop" << std::endl;
    for(size_t i = 0; i < c.capacity(); ++i) {
        std::cout << c[i] << std::endl;
    }

    // C++98 style loop with iterators
    std::cout << "C++98 Style iterator loop" << std::endl;
    for(auto it = c.begin(); it != c.end(); ++it) {
        std::cout << *it << std::endl;
    }

    // Iterators also will give us access to std::algorithm
    std::cout << "std::algorithm Loop" << std::endl;
    std::for_each(c.begin(), c.end(), [](auto &e) {
        std::cout << e << std::endl;
    });

    // We need to implement iterators, however,
    // in order to use range-based loops
    std::cout << "ranged-for loop" << std::endl;
    for(const auto& e : c) {
        std::cout << e << std::endl;
    }

    return 0;
}
