#include <iostream>
#include <array>

int main() {
    
    std::array<int, 4> numbers{ 2, 4, 6, 8 };

    std::cout << "Second element :-" << numbers[1] << "\n";

    numbers[0] = 5;

    std::cout << "All numbers displaying :-";
    for (auto i : numbers) {
        std::cout << ' ' << i;

    }
    std::cout << '\n';

    return 0;
}