#include <iostream>
#include <initializer_list>

struct UDT{

    UDT(int a, int b, int c){
        std::cout << "constructor with 3 params\n";
    }


    //specifying a constructor that takes advantage of initializer_list
    // : m_data(data) is written bcz we don't want to do the copy and have potential to do move semantics
    UDT(std::initializer_list<int> data) : m_data(data) {
        std::cout << "Initializr_list constructor\n";
        m_data = data;
    }

    ~UDT(){

    }

    void PrintData(){
        for(auto& e : m_data){
            std::cout << e << ", ";
        }
        std::cout << std::endl;
    }

    private:
        std::initializer_list<int> m_data;

};


int main(){

    UDT u{1,2,3,4,5,6,7}; // will print Initializer_list constructor as output
    //UDT u(1,2,3);  // will print constructor with 3 params as output 
    u.PrintData(); 

    return 0;
}

// curly braces and initializer_list will prevent us from not changing the data type of the values

// curly braces is for using an initializer list if you have that defined in your constructor
// curly braces is also used to prevent type conversions