#include <iostream>

template<typename first, typename second>
struct Entry{
    // Use initializer list to initialize members
    Entry(first key, second value) : m_key(key), m_value(value) {}
    first m_key;
    second m_value;
};

int main(){

    // Class Template Argument Deduction (CTAD)
    Entry<int, float> entry(5, 100.1f); //C++17 and above

    std::cout << entry.m_key << std::endl;
    std::cout << entry.m_value << std::endl;

    return 0;
}