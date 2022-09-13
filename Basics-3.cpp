/*
    Switch, References, Ptrs.
*/


#include <iostream>


int main() {
    std::cout << "--------SWITCH----------\n";
    std::cout << "Enter a number : ";
    int x;
    std::cin >> x;

    switch(x) {
        case 1:
            std::cout << "One\n";
            break;
        case 2:
            std::cout << "Two\n";
            break;
        default:    // if none of above cases
            std::cout << "Anything else\n";
            break;
    }

    std::cout << "\n\n----------REFERENCES-----------\n";
    int a = 2; // variable a
    int &b = a; // variable b referencing variable a
                // if a changes -> b references new a

    std::cout << "Variable a: " << a << "\n";
    std::cout << "Variable b: " << b << "\n";
    std::cout <<
}
