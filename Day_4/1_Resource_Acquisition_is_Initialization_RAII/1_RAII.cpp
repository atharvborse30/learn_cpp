#include <iostream>

class Collection{
    public:
        Collection() {
            data = new int[10];
            try{
                throw 20;
            } catch(int e){
                // some error message
            }
        }

        ~Collection(){
            //destructor is still called
            std::cout << "destructor is called\n";
            delete[] data;
        }

        int& operator[](std::size_t idx){
            return data[idx];
        }

        // operator overload 
        const int& operator[](std::size_t idx) const {
            return data[idx];
        }

    private:
        int* data;
};

int main() {

    Collection myCollection;
    myCollection[0] = 7;
    myCollection[1] = 7;
    myCollection[2] = 7;
    std::cout << myCollection[0] << std::endl;

    return 0;
}

// search for cppcoreguidelines/blob/master/6-use-raii-to-prevent-leaks