// Write a CPP Program to find the factorial of a number using functions 
// (demonstrating call by value).
#include <iostream>
using namespace std;
class FactorialCalculator {
    public:
    int factorial(int n) {
        if (n <= 1)
            return 1;
        return n * factorial(n - 1);
    }
};
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    FactorialCalculator obj;
    cout << "Factorial of " << num << " is: " << obj.factorial(num) << endl;
    return 0;
}