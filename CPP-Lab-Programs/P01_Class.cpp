// Write a CPP Program to find the factorial of a number using functions 
// (demonstrating call by value).
#include <iostream>
using namespace std;

class FactorialCalculator 
{
    int n, result;
    public:
    void setN(int num) {
        n = num;
    }
    int getN() {
        return n;
    }
    int getResult() {
        return result;
    }
    void calculateFactorial() {
        result = 1;
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
    }   
};

int main() {
    int n;
    FactorialCalculator obj1;

    cout << "Enter a number: ";
    cin >> n;
    
    obj1.setN(n);
    obj1.calculateFactorial();
    cout << "Factorial of " << obj1.getN() << " is: " << obj1.getResult() << endl;
    return 0;
}