#include <iostream>
#include <format>
#include <string>
#include <algorithm>

struct Point2D{
    float x,y;
};

std::ostream& operator<<(std::ostream& os, const Point2D& obj){
    os << "(" << obj.x << "," << obj.y << ")";
    return os;
}

// fomatter use
template<>
struct std::formatter<Point2D>{
    bool special = false;
    constexpr auto parse(auto& ctx){
        auto it = ctx.begin();
        if(it == ctx.end()){
            return it;
        }
        if(*it == '$'){
            special = true;
            ++it;
        }
        if(it != ctx.end() && *it != '}'){
            throw std::format_error("Invalid ARGS-Point2D!!!");
        }
        return it;
    }

    auto format(const Point2D& p, auto& ctx) const{
        if(special){
            return std::format_to(ctx.out(), "({},{})", p.x, p.y);
        }else{
            return std::format_to(ctx.out(), "{},{}", p.x, p.y);
        }
    }
};

int main(){

    Point2D p;
    p.x = 7.3f;
    p.y = 5.5f;

    std::cout << std::format("Point is: {}", p) << std::endl;

    std::cout << std::format("Point is: {:$}",p) << std::endl;

    return 0;
}