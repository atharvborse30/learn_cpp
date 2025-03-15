#include <iostream>

template<typename T, int Size>

class Container{
    public:
        Container(){
            m_data = new T[Size];
        }
        ~Container(){
            delete[] m_data;
        }

    private:
        T* m_data;
};


int main() {
    Container<int,5> c1;
    Container<int,7> c2;
    Container<double,5> c3;

    return 0;
}

//copy paste this code on cppinsigths and see what's happening