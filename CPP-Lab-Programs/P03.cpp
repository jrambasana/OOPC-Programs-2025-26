// Write a C++ Program to create a BankAccount class with data members and member functions
// to handle deposit and withdrawal
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    double balance;
    string accountNumber;

public:
    // Constructor
    BankAccount(string name, string accNum, double initialBalance = 0.0) {
        accountHolderName = name;
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
            cout << "New Balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdrawal function
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
            cout << "New Balance: $" << balance << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    // Display account details
    void displayBalance() {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account("John Doe", "123456789", 1000.0);
    
    account.displayBalance();
    cout << "\n--- Deposit Operation ---" << endl;
    account.deposit(500);
    
    cout << "\n--- Withdrawal Operation ---" << endl;
    account.withdraw(300);
    
    cout << "\n--- Final Balance ---" << endl;
    account.displayBalance();
    
    return 0;
}
