#include <iostream>

// setting a default value in parameter list
template<typename T=int, int Size=10>
class Container{
    public:
        Container(){
            m_data = new T[Size];
            std::cout << Size << std::endl;
        }
        ~Container() {
            delete[] m_data;
        }

    private:
        T* m_data;
};


int main(){
    Container<int, 5> c1;
    Container<int> c2;

    return 0;
}

//copy this into cppinsights and try to see what's happening inside this code