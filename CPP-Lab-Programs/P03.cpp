// Write a C++ program to show Basic Input/Output and Arithmetic Operations.5

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int num1, num2;
    
    // Input
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    // Arithmetic Operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;
    int remainder = num1 % num2;
    
    // Output
    cout << "\n--- Arithmetic Operations ---" << endl;
    cout << "Addition: " << num1 << " + " << num2 << " = " << sum << endl;
    cout << "Subtraction: " << num1 << " - " << num2 << " = " << difference << endl;
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << product << endl;
    cout << "Division: " << num1 << " / " << num2 << " = " << quotient << endl;
    cout << "Modulus: " << num1 << " % " << num2 << " = " << remainder << endl;
    
    return 0;
}