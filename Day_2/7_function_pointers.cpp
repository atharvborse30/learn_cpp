#include <iostream>
#include <functional>

// another way to work with function pointers
typedef int (*PFnIntegerOperations)(int, int);

int add(int x, int y) {
    return x+y;
}

int multiply(int x, int y) {
    return x*y;
}

int main() {
    // 1st way to use function pointer
    //function pointer for functions: int name(int, int)
    // int (*op)(int, int);
    // 2nd way to use function pointer using typedef
    //instead we can also use like this using typdef
    // PFnIntegerOperations op;

    // 3rd way to use function pointer
    std::function<int(int,int)> op;
    
    std::cout << "1. for add or 2. for multiply" << std::endl;
    int n;
    std::cin >> n;
    if(n==1) {
        op = add;
    }else if(n==2) {
        op = multiply;
    }

    int x, y;
    std::cin >> x;
    std::cin >> y;
    std::cout << "Operation: " << op(x,y) << std::endl;
}