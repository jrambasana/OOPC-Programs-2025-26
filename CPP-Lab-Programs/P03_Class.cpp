// Write a C++ program to show Basic Input/Output and Arithmetic Operations.

#include <iostream>
using namespace std;

class ArithmeOperator
{
    int a, b, result;
    public:
    void setA( int num1 ) 
    {        a = num1;      }
    void setB( int num2 ) 
    {        b = num2;      }
    int getA() 
    {        return a;      }
    int getB() 
    {        return b;      }
    int add() 
    {        result = a + b; return result;      }
    int subtract() 
    {        result = a - b; return result;      }
    int multiply() 
    {        result = a * b; return result;      }
    int divide() 
    {        result = a / b; return result;      }
    int modulus() 
    {        result = a % b; return result;      }
};

int main() {
    // Declare variables
    int num1, num2;
    
    // Input
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    ArithmeOperator obj;
    obj.setA(num1);
    obj.setB(num2);

    // Output
    cout << "\n--- Arithmetic Operations ---" << endl;
    cout << "Addition: " << num1 << " + " << num2 << " = " << obj.add() << endl;
    cout << "Subtraction: " << num1 << " - " << num2 << " = " << obj.subtract() << endl;
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << obj.multiply() << endl;
    cout << "Division: " << num1 << " / " << num2 << " = " << obj.divide() << endl;
    cout << "Modulus: " << num1 << " % " << num2 << " = " << obj.modulus() << endl;
    
    return 0;
}