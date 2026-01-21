#include <iostream>
using namespace std;

class ArithmeticOperations 
{
  int a=0, b=0;
  public:
    ArithmeticOperations(int x, int y)
    {
        a = x;
        b = y;
    }
    void setA(int x) { a = x; }
    void setB(int y) { b = y; }
    int getA() { return a; }
    int getB() { return b; }

    int add()           
    {  return a + b;    }
    int sub()           
    {  return a - b;    }
    double divide()  
    {  return ((double)a / b);     }
    int mult()           
    {  return a * b;    }

};

int main() {
  int a, b;
  cout << "Using Class to perform Arithmetic Operations\n";
  cout << "Enter Number 1: ";
  cin >> a;
  cout << "Enter Number 2: ";
  cin >> b;
  
  ArithmeticOperations obj(a, b);

  cout << "Addition: " << obj.add() << "\n";
  cout << "Subtraction: " << obj.sub() << "\n";
  cout << "Multiplication: " << obj.mult() << "\n";
  cout << "Division: " << obj.divide() << "\n";

  return 0;
}