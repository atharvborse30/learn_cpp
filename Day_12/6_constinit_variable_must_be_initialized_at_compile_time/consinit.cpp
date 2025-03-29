#include <iostream>

// constinit
// added in c++20
// only applies to variables
// pairs well with 'consteval'
// sometimes works with constexpr -- if that constexpr expression evaluates at comile time -- provably.
// variable must be initialized at compile time
// that means we need space for it.
// so we need variable to be 'global' or 'static'

// Maybe evaluated at compile time
constexpr int get_value_constexpr(){
    return 42;
}

// maybe evaluated at compile time
constexpr int get_value_constexpr2(int n){
    return 42+n;
}

// Must be evaluated at compile time
consteval int get_value_consteval(){
    return 43;
}

constexpr const char* get_string(){
    return "hello subscribers";
}

int main(){

    constinit static int var1 = 7;
    constinit static int var2 = get_value_constexpr();
    constinit static int var3 = get_value_constexpr(7);
    constinit static int var4 = get_value_consteval();

    const int n = 7;
    consinit static int var5 = get_vaue_constexpr2(n);
    var5++;

    consinit static char* var6 = get_string();

    return 0;
}