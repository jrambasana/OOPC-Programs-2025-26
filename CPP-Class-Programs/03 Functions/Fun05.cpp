#include <iostream>
using namespace std;

int add(int a, int b)           
{  return a + b;    }
double add(double a, double b)  
{  return a+b ;     }

int main() {
  cout << "Int Addition: " << add(3, 5) << "\n";
  cout << "Double Addition: " << add(2.1, 6.2) << "\n";
  return 0;
}