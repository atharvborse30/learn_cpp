#include <iostream>
#include <string>

class udt{
    public:
        explicit udt(int);

    private:
        int m_variable;
};

udt::udt(int i) {
    m_variable = i;

    std::cout << "m_variable: " << m_variable << std::endl;
}

int main() {

    //udt u1 = 500;  //will throw error to run these line you have to remove the word 'explicit' written above , but this will then be implicit constructor
    // and we don't want 

    // so we add curly brackets while using explicit word
    udt u1{500};  // using the list initialization here which protect the idea of an automatic conversion by narrowing down the data type

    return 0;
}