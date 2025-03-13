// const: correctness
// 1. read-only ("immutable") variable;
// 2. read-only parameters
// 3. making all of the member variables in a member function read-only
//this use is defined here

#include <iostream>

class UserDefinedType{
    public:
        UserDefinedType(){

        }
        ~UserDefinedType(){

        }
        //copy constructor
        UserDefinedType(const UserDefinedType& rhs) {

        }

        void SetValue(int newValue) {
            m_value = newValue;
        }

        // marked these function as const , to ensure that nothing's being changed
        void ComputeValue() const{
            //m_value = 10;
        }

        // Returns m_value
        // const correctness used here
        int GetValue() const {
            // cannot use these function here 
            //ComputeValue();
            return m_value;
        }

    private:
        int m_value;
};


int main(){

    UserDefinedType u;
    u.SetValue(100);
    std::cout << u.GetValue() << std::endl;

    return 0;
}