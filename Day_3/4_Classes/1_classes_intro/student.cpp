#include <iostream>
#include "student.hpp"

Student::Student(){
    std::cout << "Constructor" << std::endl;
}

Student::~Student(){
    std::cout << "Destructor: " << m_name << std::endl;
}

void Student::printName(){
    std::cout << "name is " << m_name << std::endl;
}