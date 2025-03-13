#include <iostream>
#include <string>

class TopLevelClass{
    public:
        TopLevelClass(std::string arg){
            std::cout << "top level class\n";
        }
};

class EntityBase : public TopLevelClass {
    public:
        EntityBase() : TopLevelClass("arg") {
            std::cout << "EntityBase Constructor" << std::endl;
        }
        EntityBase(std::string name) : TopLevelClass("arg"), m_name(name) {
            std::cout << "EntityBase(name) Constructor" << std::endl;
        }
        ~EntityBase(){
            std::cout << "EntityBase Destructor" << std::endl;
        }

    private:
        std::string m_name;
};

class Monster : public EntityBase{
    public:
        Monster() : EntityBase("default") {
            std::cout << "Monster Constructor" << std::endl;
        }
        ~Monster(){
            std::cout << "Monster Destructor" << std::endl;
        }
};

int main() {
    
    Monster badMonster;

    return 0;
}