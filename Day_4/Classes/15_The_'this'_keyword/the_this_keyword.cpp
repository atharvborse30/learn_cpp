/*
    'this' is a keyword in c++. it refers to the particular instance
    of the object within a class.

    'this' is a pointer to the current instance of the object.
*/

#include <iostream>

class Person{
    public:
        //constructor
        Person(int age){
            this->age = age;
            
        }
        // above is equivalent to -
        // Person(int age) : age(age) {

        // }

        // member function
        int GetAge() const{
            // return age;
            //equivalent to above line, both are same
            return this->age;
        }

        //member function to return the address of our object
        Person* GetThisAddress(){
            return this;
        } 


    private:
        //member variable
        int age;
};


int main(){

    Person atharv(25);

    //std::cout << atharv.GetAge() << std::endl;

    std::cout << atharv.GetThisAddress() << std::endl;
    std::cout << &atharv << std::endl;

    Person* ajinkya = new Person(26);
    std::cout << ajinkya->GetThisAddress() << std::endl;
    //std::cout << &ajinkya << std::endl; // address of the pointer
    std::cout << ajinkya << std::endl; // actual memory allocated

    delete ajinkya;

    return 0;

}