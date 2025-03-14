#ifndef STATIC_MEMBER_HPP
#define STATIC_MEMBER_HPP

struct API{
    API();
    ~API();
    // Member variable that belongs to each instance
    static int MAJOR;
    static int MINOR;

    static int GetMajorVersion();
};

#endif