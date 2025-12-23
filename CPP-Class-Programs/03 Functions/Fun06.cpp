#include <iostream>
using namespace std;

int add(int a, int b)           
{  return a + b;    }
double add(double a, double b)  
{  return a+b ;     }

int sub(int a, int b)           
{  return a - b;    }
double sub(double a, double b)  
{  return a - b ;     }

int divide(int a, int b)           
{  return a / b;    }
double divide(double a, double b)  
{  return a / b ;     }

int mult(int a, int b)           
{  return a * b;    }
double mult(double a, double b)  
{  return a * b ;     }


int main() {
  cout << "Int Addition: " << add(3, 6) << "\n";
  cout << "Double Addition: " << add(2.1, 6.2) << "\n";

  cout << "Int Subtraction: " << sub(3, 6) << "\n";
  cout << "Double Subtraction: " << sub(2.1, 6.2) << "\n";

  cout << "Int Multiplication: " << mult(3, 6) << "\n";
  cout << "Double Multiplication: " << mult(2.1, 6.2) << "\n";

  cout << "Int Division: " << divide(5, 2) << "\n";
  cout << "Double Division: " << divide(5.0, 2.0) << "\n";

  return 0;
}