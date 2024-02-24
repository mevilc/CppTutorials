/*
  Arrays, Vectors, templatized arrays
  For loops through array 
*/ 

#include <iostream>
#include <string>   
#include <array> // std C++ arrays. 
#include <vector>

int main () {
    
    std::cout << "----------ARRAYS-------------\n";
    // C array. Can specify length.
    // Statically sized at compile time
    // Does not know its size
    int arr1[] = {1, 2, 3, 4, 5};

    // std arrays
    std::array<int, 5> arr2 = {1, 2, 3, 4, 5};
    std::cout << "Length of std array: " <<  arr2.size() << "\n";

    // dynamic array -- vector -- knows its size
    // dynamically sized
    std::vector<int> vector_arr = {123, 323,5};
    std::cout << "Initial vector: " << vector_arr.front() << std::endl;
    vector_arr.push_back(100);
    std::cout << "New vector: " << vector_arr.back() << "\n";
    
    // templatized arrays are covered in an object. Gives more functionality.

    
    // Do while loops
    // DO something atleast once, then loop based on WHILE condition
    std::cout << "\n---------------Do-while loops---------------\n";
    int x = 5;
    do {
        int add;
        std::cout << "Enter number to add: ";
        std::cin >> add;
        x += add;
        std::cout << "X is now: " << x << "\n";
    } while (x < 10);
            
    // range-based for loop -- requires C++11
    std::cout << "Range based for loop: \n";
    for(char num : vector_arr) {
        std::cout << num << "\n";
   }
    
    // Regular for loop
    std::cout << "For loop: \n";
    for(int i = 0; i < vector_arr.size(); i++) {
        std::cout << arr1[i] << "\n";
    }
}
