#include <iostream>

struct MyStruct{

    void Function() {
        //auto f = [&]() {   and uncomment the counter++ line
        auto f = [*this]() {
            //counter++;
            std::cout << "counter inside lambda: " << counter << std::endl; 
        };

        f();

        std::cout << "counter: " << counter << std::endl;
    }

    int counter{0};
};


// [ captures ] ( params ) { body }

int main() {

    MyStruct instance;
    instance.Function();
    instance.Function();
    instance.Function();
    instance.Function();

    return 0;
}