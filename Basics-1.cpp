/*
    1) Build --> generates a machine code file
    2) Run --> using a compiler

    Data types
    1) char -- single letter -- single qoutes
    2) string -- multiple letters -- double qoutes
    3) int -- only whole numbers
    4) float -- stores fewer decimal pts.
    5) double -- stores more decimal pts. 
    6) bool -- T/F

*/

// input-output library 
#include <iostream> 
using namespace std; 

// Main function -- always runs first
int main() {
    string fname = "Mevil";   
    string lname = "Crasta";
    int age = 24;
    char initial = 'M';
    double days = 12.5;

    cout << "---------- Testing variables -----------\n";
    cout << "My name is " << fname << " " << lname << endl;   // cout - console out
    cout << "I am " << age << " years old\n";
    cout << "initials: " << initial << endl << endl;

    // String functions (methods)
    cout << "---------- String Functions ----------\n";
    cout << "Length of " << fname << " is " << fname.length() << endl;
    cout << "idx of find " << fname.find("vil", 0) << endl;
    cout << "sub string: " << fname.substr(1, 3) << endl << endl;

    // Numbers
    cout << "---------- Numbers ----------\n";
    cout << "Sum: " << 5 + 34121 << endl;
    cout << "int + double --> double: " << age + days << endl;   
    age++;  // increment 1
    cout << "incrememnt num: " << age << endl;
    cout << "Integer division: " << 12 / 5 << endl;
    cout << "Double division: " << 12.0 / 5 << endl << endl;

    // User input
    cout << "---------- User Input ----------\n";
    string in;
    cout << "Enter an input: \n";
    getline(cin, in);       // getline() takes in >1 word
    cout << "Input was: " << in << endl;

    return 0; 
}




