#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void test0(){
    std::vector<int> v1{1,3,4,4,4,6,8,9};

    int results = std::count(v1.begin(), v1.end(),4);
    std::cout << "count: " << results <<std::endl;
}

void test1(){
    std::vector<int> v1{1,3,4,4,4,4,6,8,9};

    int results = std::count_if(v1.begin(), v1.end(),[](int elem){
        return elem >= 4;
    });
    std::cout << "count: " << results <<std::endl;
}

struct Enemy{
    int health{100};
    int attack{10};
    Enemy(int h, int a) : health(h), attack(a){

    }
};

void test2(){
    // Enemies e1(100,10);
    // Enemies e2(-10,10);
    // Enemies e3(-50,10);
    
    std::vector<Enemy> enemies = {{100,10},{-10,10},{-50,10}};

    auto test1 = [](Enemy e) { return e.health > 0; };
    auto test2 = [](Enemy e) { return e.health > -40; };

    int enemiesLeft = std::count_if(enemies.cbegin(), enemies.cend(), test2);

    if(enemiesLeft == 0){
        std::cout << "proceed to next level\n";
    } else{
        std::cout << "you have " << enemiesLeft << " enemies to blast away!\n";
    }
}

int main(){

    test0();
    test1();
    test2();

    return 0;
}