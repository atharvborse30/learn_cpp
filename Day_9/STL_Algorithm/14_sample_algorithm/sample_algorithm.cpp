#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <random>

int main() {
    std::vector<int> ai_bots{1, 3, 7, 6, -2};
    std::vector<int> out;

    // Define a persistent random number generator
    std::random_device rd;  // Obtain a random seed
    std::mt19937 gen(rd()); // Standard Mersenne Twister engine seeded with rd()

    std::sample(ai_bots.begin(), ai_bots.end(), std::back_inserter(out), 3, gen);

    // Print the sampled elements
    for (auto elem : out) {
        std::cout << elem << std::endl;
    }
    
    return 0;
}
