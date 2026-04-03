// Program to handle division-by-zero and invalid input exceptions 
// using try, throw, and catch blocks.

#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    try {
        if (num2 == 0) {
            throw "Division by zero is not allowed.";
        }
        if (cin.fail()) {
            throw "Invalid input. Please enter integers.";
        }
        int result = num1 / num2;
        cout << "Result: " << result << endl;
    } catch (const char* msg) {
        cerr << "Error: " << msg << endl;
    }

    return 0;
}