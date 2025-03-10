#include <iostream>

class Array{
    public:
        Array(){
            std::cout << "Constructor" << std::endl;
            data = new int[10];
            for(int i=0; i<10; i++) {
                data[i] = i*i;
            }
        }

        ~Array(){
            delete[] data;
        }

        // Copy Constructor
        Array(const Array& rhs) {
            std::cout << "Copy Constructor" << std::endl;
            data = new int[10];
            // bcz here the copy constructor is allocating dynamically its own memory, doing new int[10] here that just means i'm initializing it or during the construction phase of the object i'm getting from the right hand side (rhs) which is "myArray" of the equation here
            for(int i=0; i<10; i++) {
                data[i] = rhs.data[i];
            }
        }

        //Copy Assignment Operator
        // this is called for when after an object has been constructed
        // so object is already constructed, we are just making a copy later e.g. myArray2 = myArray
        // return a reference type to our object here
        Array& operator=(const Array& rhs) {
            std::cout << "Copy Assignment operator " <<std::endl;

            if(&rhs == this){
                return *this;  //it's just a pointer to the current instance of the object and if i dereference that i'm just getting the Array object back itself
            }
            // equivalent to myArray2 = myArray2

            delete[] data;

            data = new int[10];
            for(int i=0; i<10; i++) {
                data[i] = rhs.data[i];
            }

            return *this;

        }

        void PrintingData(){
            for(int i=0; i<10; i++) {
                std::cout << data[i] << std::endl;
            }
        }

        void SetData(int index, int value) {
            data[index] = value;
        }

    private:
        int* data;
};

int main() {

    // Initialize all of our data up front
    Array myArray;            // myArray will have int* data

    myArray.SetData(0,55);
    myArray.SetData(1,77);
    myArray.SetData(2,99);

    //Array myArray2 = myArray; //copy constructor  // myArray2 will also have myArray's int* data so two int* data will get created and this leads to shallow copy, and will throw double free detected in tcache 2
    // c++ gives us a "free" copy constructor and copy assignment operator, but it does a shallow copy
    
    // so anytime you're using new, malloc and memory allocation function where you have a pointer typically you want to write your own copy constructor and do the memory allocation yourself


    Array myArray2;
    myArray2 = myArray;  //copy assignment operator
    
    myArray.PrintingData();
    myArray2.PrintingData();

    

    return 0;
}
