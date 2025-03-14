#include "static_member.hpp"

API::API() { }
API::~API() { }

int API::GetMajorVersion(){
    return MAJOR;
}

int API::MAJOR = 7;