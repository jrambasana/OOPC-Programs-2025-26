// Program to handle division-by-zero and invalid input exceptions 
// using try, throw, and catch blocks. 

#include <iostream>
using namespace std;

// double divide(int a, int b) {
//     if (b == 0) {
//         throw "Division by zero is not allowed.";
//     }
//     return static_cast<double>(a) / b;
// }

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    try {
        // double result = divide(num1, num2);
        if (num2 == 0) {
            throw "Division by zero is not allowed.";
        }
        double result = (double)(num1) / num2;
        cout << "Result: " << result << endl;
    } catch (const char* msg) {
        cerr << "Error: " << msg << endl;
    }
    catch (const invalid_argument& e) {
        cerr << "Invalid input: " << e.what() << endl;
    }
    catch (const exception& e) {
        cerr << "Invalid input: " << e.what() << endl;
    }

    return 0;
}