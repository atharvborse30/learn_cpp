#include "pimpl.hpp"

struct Person::pImplPerson{
    std::string m_name;
    std::string m_strength;
    std::string m_speed;
};

Person::Person(std::string s){
    //smart unique pointer
    m_impl = std::make_unique<pImplPerson>();

    // this is a pointer to implementation so we use -> to access.
    m_impl->m_name = s;
    m_impl->m_strength = "n/a";
    m_impl->m_speed = "n/a";
}

Person::~Person(){
    //here we don't need to delete unique pointer , it automatically gets deleted
}

std::string Person::GetAttributes(){
    return m_impl->m_name + "," + m_impl->m_strength + " " +m_impl->m_speed;
}