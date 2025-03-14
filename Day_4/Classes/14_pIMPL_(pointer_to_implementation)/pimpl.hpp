#ifndef PIMPL_HPP
#define PIMPL_HPP

#include <string>
#include <memory>

class Person{
    public:
        Person(std::string s);
        ~Person();
        std::string GetAttributes();

    private:
        struct pImplPerson;
        // smart unique pointer
        std::unique_ptr<pImplPerson> m_impl;
        
};

#endif