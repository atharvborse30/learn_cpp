#include <iostream>

class Dog{  //Base Class
    public:
        Dog() {

        }

        void Bark(){
            std::cout << "Bark!!" << std::endl;
        }

        void Walk(){
            x+=1;
            y+=1;
        }

        float x,y;
};

class Golden : public Dog{
    public:
        Golden(){
            m_SticksRetrieved=0;
        }
        void Retrieve(){
            std::cout << "retrieving a stick\n";
            m_SticksRetrieved++;
        }

        float m_SticksRetrieved;
};

class Husky : public Dog{

};

int main() {

    Dog dog;
    dog.Bark();

    Golden golden;
    golden.Bark();
    golden.Walk();
    golden.Retrieve();

    Husky husky;
    husky.Bark();
    husky.Walk();

    std::cout << "sizeof(Dog) " << sizeof(Dog) << std::endl;
    std::cout << "sizeof(Golden) " << sizeof(Golden) << std::endl;
    std::cout << "sizeof(Husky) " << sizeof(Husky) << std::endl;

    return 0;
}