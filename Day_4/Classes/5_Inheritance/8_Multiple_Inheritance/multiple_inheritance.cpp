#include <iostream>

// Using struct bcz in struct everything is by default public

struct noncopyable{
    noncopyable()=default;
    noncopyable(const noncopyable& rhs) = delete;
    noncopyable& operator=(const noncopyable& rhs) = delete;
};

struct Dog : public noncopyable{
    virtual void Bark(){
        std::cout << "Dog::Bark\n";
    }
};

struct Golden : public Dog{
    virtual void Bark() override {
        std::cout << "Golden::Bark\n";
    }
};

struct BorderCollie : public Dog{
    virtual void Bark() override {
        std::cout << "BorderCollie::Bark\n";
    }
};

struct Coltriever : public Golden, BorderCollie{
    void Bark() override {
        std::cout << "Coltriever::Bark\n";
    }
};


int main(){
    // Dog dog;
    // Golden golden;
    // BorderCollie borderCollie;
    // Coltriever coltriever;

    // dog.Bark();
    // golden.Bark();
    // borderCollie.Bark();
    // coltriever.Bark();

    
    // Dog dog2;
    // Dog dog3;
    // dog3 = dog2;

    Dog* dog = new Dog;
    Dog* golden = new Golden;
    Dog* borderCollie = new BorderCollie;
    Coltriever* coltriever = new Coltriever;

    dog->Bark();
    golden->Bark();
    borderCollie->Bark();
    coltriever->Bark();

    // dog = golden;

    return 0;

}