#include <iostream>

using namespace std;

class My_Class {
  private: // Private access specifier
    int b; 
  public: // Public access specifier
    int a;
    int getB() {
      return b;
    }
    void setB(int value) {
      b = value;
    }
};

int main() {
  My_Class my_Obj;

  my_Obj.a = 16; 
  // my_Obj.b = 2002; 
  my_Obj.setB(2002);

  cout<< "Value of a: " << my_Obj.a << endl;
  cout<< "Value of b: " << my_Obj.getB() << endl;
  
  return 0;
}