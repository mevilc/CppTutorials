/*
    Classes, objects, functions, switch
*/


#include <iostream>

using namespace std;

class Account {
    public:
       double balance = 0.0;
        string name;
        int acc_num;
        
    // Deposit
    double deposit(double amt) { 
        balance += amt;
        return balance; 
        
    }
    
    // Withdraw
    double with(double amt) {
        balance -= amt;
        return balance;
        
    }
    
    double curr_bal () { return balance; }
    string acc_name () { return name; }
    int acc_number () { return acc_num; }
};
    

int main() {
    
    char choice;
    double dep_amt; double with_amt;
    
    cout << "Bank Account \nDeposit (D)\nWithdraw (W)\nCurrent Balance (C)\nAccount Info (A)\n\n";
    cin >> choice;
    Account account;
    
    // Ask for name
    string tmp_name;
    cout << "Enter a name: ";
    getline(cin, tmp_name);
    account.name = tmp_name;
    
    // Generate account number
    account.acc_num = rand() % 10000 + 1;
    cout << "Account number generated: " << rand() % 10000 + 1;
    
    switch (choice) {
        case 'D':
            cout << "Depost amount: ";
            cin >> dep_amt;
            cout << "New balance: " << account.deposit(dep_amt);
            break;
        
        case 'W':
            cout << "Withdraw amount: ";
            cin >> with_amt;
            cout << "New balance: " << account.with(with_amt);
            break;
            
        case 'C':
            cout << "Current balance: " << account.curr_bal();
            break;
            
        case 'A':
            cout << "Account name: " << account.acc_name();
            cout << "Account number: " << account.acc_number();
            break;
    }
    
    return 0;
}

