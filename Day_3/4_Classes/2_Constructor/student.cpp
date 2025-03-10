#include <iostream>
#include "student.hpp"

Student::Student(){
    m_name = "no_name";
    std::cout << "Constructor" << std::endl;
    std::cout << "m_name is: " << m_name << std::endl;
}

Student::Student(std::string name) {
    m_name = name;
    std::cout << "Constructor: " << std::endl;
    std::cout << "m_name is: " << m_name << std::endl;
}

Student::~Student(){
    std::cout << "Destructor: " << m_name << std::endl;
}

void Student::printName(){
    std::cout << "name is " << m_name << std::endl;
}

