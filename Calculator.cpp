/*
    Maps, functions, switch
*/


#include <iostream>
#include <map>
#include <cmath>
#include <tuple>

using namespace std;

double add(double n1, double n2) { return n1 + n2; }

double sub(double n1, double n2) { return n1 - n2; }

double mul(double n1, double n2) { return n1 * n2; }

double divide(double n1, double n2) { return n1 / n2; }        

tuple<double, double, char> quad(double A, double B, double C) {

    double det = pow(B, 2) - 4*A*C;
    //char real = 'R', imag = 'I';

    if (det >= 0) {
                
        double root1 = ( -B + sqrt(det)) / (2*A);
        double root2 = ( -B - sqrt(det)) / (2*A);
        
        return make_tuple(root1, root2, 'R');
    }

    else if (det < 0) {
        
        double rootReal = -B / (2*A);
        double rootImag = sqrt(det * -1) / (2*A);
        return make_tuple(rootReal, rootImag, 'I');  
    }
    return make_tuple(0, 0, 'A');
}

int main() {
    
    char choice;
    double n1; double n2;
    bool flag = true;
    map <char, string> Operations;

    Operations['A'] = "add";    
    Operations['S'] = "subtract";
    Operations['M'] = "multiply";
    Operations['D'] = "divide";

   // Operations.insert({'A', "add"});
   // Operations.insert({'S', "subtract"});
   // Operations.insert({'M', "multiply"});
   // Operations.insert({'D', "divide"});   

    cout << "\n\nCalculator: \n\n";
    
    while (flag) {
        cout << "Add (A), Subtract (S), Multiply (M),  Divide (D), or Quadratic Roots (Q)?\n";
        cin >> choice;
        
        while (choice != 'A' and choice != 'S' and choice != 'M' and choice != 'D' and choice != 'Q') {
            cout << "Invalid choice. Enter again: \n";
            cin >> choice;
        }
        
        switch  (choice) {
        
            case 'Q':
                // Quadratic Roots
                double A; double B; double C;
                cout << "Give the coefficients: A, B, C\n";
                cin >> A >> B >> C;

                double r1, r2;
                char option;

                tie(r1, r2, option) = quad(A, B, C);

                switch (option) {
                    case 'R':
                        cout << "Root 1: " << r1 << " and Root 2: " << r2;
                        break;
                    
                    case 'I':
                        cout << "Root 1: " << r1 << " + " << r2 << "i\n";
                        cout << "Root 2: " << r1 << " - " << r2 << "i\n";
                        break;
                }

                break;
            
            default:

                 cout << "Give two numbers to " << Operations[choice] << ": \n";
                 cin >> n1 >> n2;
        
                 switch (choice) {
                    case 'A':
                        cout << add(n1, n2);
                        break;
                        
                    case 'S':
                        cout << sub(n1, n2);
                        break;
                
                    case 'M':
                        cout << mul(n1, n2);
                        break;
                
                    case 'D':
                        cout << divide(n1, n2);
                        break;
                }

                break;

        }

        
        char cont;
        cout << "\n\nContinue (Y/N)? \n";
        cin >> cont;
        if (cont == 'Y') { flag = true; }
        else {
            cout << "Thanks for using Calculator\n";
            flag = false; 
        }
        
        
    }
    return 0;
}
