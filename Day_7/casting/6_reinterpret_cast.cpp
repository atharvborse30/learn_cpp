#include <cstring>
#include <iostream>

struct GameState{
    int level;
    int health;
    int points;
    bool GameComplete;
    bool BossDefeated;
};

int main() {

    // //Example 1 start
    // float pi = 3.14f;

    // // C-style cast
    // // ---- Might get some errors, but otherwise
    // //      you can cast somewhat freely
    // std::cout << (int)(pi) << std::endl;
    // // reinterpret_cast literally interpret the bytes as whatever
    // // type you decide to treat the raw bytes.
    // std::cout << &(pi) << std::endl;
    // std::cout << *reinterpret_cast<int*>(&pi) << std::endl; // treat the address here where the pi lives give me a pointer to it and an int pointer holds well what it's going to interpret as an integer and then we dereferecne it * to get the actual value back
    // std::cout << *reinterpret_cast<float*>(&pi) << std::endl;


    //Load some game state
    GameState gs = {66, 100, 999, true, true};

    // Allocate some memory
    char bagOfBytes[sizeof(GameState)];

    // Lets just store some data structure into 'bag of bytes'
    std::memcpy(bagOfBytes, &gs, sizeof(GameState));

    std::cout << (*bagOfBytes) << std::endl;
    std::cout << *((int*)bagOfBytes) << std::endl;

    // time to read in the data using reinterpret_case
    // std::cout << *reinterpret_cast<int*>(bagOfBytes) << std::endl;
    // std::cout << *reinterpret_cast<int*>(bagOfBytes+sizeof(int)) << std::endl;
    // std::cout << *reinterpret_cast<int*>(bagOfBytes+sizeof(int)*2) << std::endl;
    // std::cout << *reinterpret_cast<bool*>(bagOfBytes+12) << std::endl;
    // std::cout << *reinterpret_cast<bool*>(bagOfBytes+13) << std::endl;

    // probably better to do this instead of above
    GameState gs2 = *reinterpret_cast<GameState*>(bagOfBytes);
    std::cout << gs2.level << std::endl;
    std::cout << gs2.health << std::endl;
    std::cout << gs2.points << std::endl;
    std::cout << gs2.GameComplete << std::endl;
    std::cout << gs2.BossDefeated << std::endl;

    return 0;
}