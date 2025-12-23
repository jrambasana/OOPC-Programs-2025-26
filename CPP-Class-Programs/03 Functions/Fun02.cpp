#include<iostream>
#include <cstring>

using namespace std;

// Function declaration
void myFunction();

int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  cout << "I just got executed!";
}