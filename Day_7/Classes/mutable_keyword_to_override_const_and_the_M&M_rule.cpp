#include <iostream>
#include <vector>

struct Point3f{
    public:
        explicit Point3f(float _x, float _y, float _z) : x(_x), y(_y), z(_z), w(1.0f) {}

        // if we use const after a member function that means we can't change anything
        void ChangeW(float newW) const {
            // to override this const we use mutable keyword
            w = newW;
        }

        float x,y,z;
        mutable float w;
};

int main() {

    Point3f p{1.0f, 2.0f, 3.0f};
    p.ChangeW(5.0f);

    std::cout << p.x << '\n' << p.y << '\n' << p.z << '\n' << p.w << '\n';

    return 0;
}

// M&M rule : mutable and mutex go together