#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// don't recommend the macro vesion -- use the STL version instead
//#define MAX(A,B) (A>B) ? A : B;


struct Monster{
    Monster(std::string n, int pow, int agi, int mag) : name(n), power(pow), agility(agi), magic(mag){}
    int power;
    int agility;
    int magic;
    std::string name;

};

std::ostream& operator<<(std::ostream& os, Monster const& m){
    return os << m.name << " wins";
}

bool monster_battle_melee_cmp(const Monster& a, const Monster& b){
    int monster_a = a.power * a.agility;
    int monster_b = b.power * b.agility;

    return monster_a < monster_b;
}

bool monster_battle_magic_cmp(const Monster& a, const Monster& b){
    int monster_a = a.magic * a.agility;
    int monster_b = b.magic * b.agility;

    return monster_a < monster_b;
}

int main(){

    // not recommended in general
    //int max = MAX(7,2);
    //std::cout << max << std::endl;

    std::cout << "max: " <<std::max(7,2) << std::endl;
    std::cout << "max: " <<std::max({7,2,9,6,5}) << std::endl;
    std::cout << "min: " << std::min(7,2) << std::endl;
    std::cout << "min: " << std::min({7,2,9,6,5}) << std::endl;

    Monster Crusher{"Crusher",100,100,1};
    Monster Mage{"Mage",1,10,100};

    std::cout << "address of Crusher: " << &Crusher << std::endl;
    const Monster& ref = std::max(Crusher, Mage, monster_battle_melee_cmp);
    std::cout << "address of ref: " << &ref << std::endl;

    std::cout << std::max(Crusher, Mage, monster_battle_melee_cmp) << std::endl;
    std::cout << std::max(Crusher, Mage, monster_battle_magic_cmp) << std::endl;

    return 0;
}