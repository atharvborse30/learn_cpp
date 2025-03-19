#include <iostream>
#include <vector>
#include <algorithm>

struct Goblin{
    int mHealth;
    int mStrength;
    Goblin(int h, int s) : mHealth(h), mStrength(s) {}

    bool operator<(const Goblin& rhs){
        return this->mHealth < rhs.mHealth;
    }
};

struct GoblinComperator{
    
    bool operator()(const Goblin& lhs, const Goblin& rhs) const{
        return lhs.mStrength < rhs.mStrength;
    }
};

int main(){

    std::vector<Goblin> goblins { Goblin(5, 205), Goblin(3, 25), Goblin(100, 1) };
    std::sort(begin(goblins), end(goblins), GoblinComperator());

    for(auto g : goblins) {
        std::cout << g.mHealth << std::endl;
    }

    return 0;
}