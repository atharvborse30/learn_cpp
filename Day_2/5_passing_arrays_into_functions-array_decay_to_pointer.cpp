#include <iostream>
#include <vector>
#include <array>

//vector is a data structure that is dynamically sized array

void PrintArray(int arr[], size_t size) {
    // so this int arr[] argument is what we say decaying to a pointer, when we pass in arrays in functions in c++
    // they are treated as pointers here
    // visit cppinsights.com
    std::cout << "sizeof(arr) : " << sizeof(arr) << std::endl;

    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << std::endl;
    }
}

void printarray(std::array<int, 5> arr, size_t size) {
    for(int i=0; i<size; i++) {
        std::cout << arr[i] << std::endl;
    }
}

// here using vector bcz what if we don't want 5 elements in the array , what if we want 4 , here vector allows us to be flexible
// it automatically increases or decreases the size accordingly

// if we're just printing out the data structure and not modifying it chances are we can pass it in by reference which is more efficient,
// and since we're not changing we'll pass in const here, if you want to modify the data structure you can use this function below -
/*
void printvectorarray(std::vector<int> vec) {
    for(int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << std::endl;
    }
}
*/
// used const here to not change the data 
// used &(pass by reference) here to avoid making copies
void printvectorarray(const std::vector<int>& vec) {
    for(int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << std::endl;
    }
}

int main() {

    // using raw array
    int array[] = {1,3,5,7,9};

    //can use these 
    // PrintArray(array, 5);
    // or these both are fine
    PrintArray(array, sizeof(array)/sizeof(int));

    std::cout << "\n";

    //using standard array
    std::array<int, 5> arrays = {1,3,5,7,9};
    printarray(arrays, sizeof(arrays)/sizeof(int));

    std::cout << "\n";

    //using vector array
    
    std::vector<int> vector_array = {1,3,5,7,9};
    printvectorarray(vector_array);

    //vector is basically a better data structure

    

    return 0;
    
}