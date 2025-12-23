#include<iostream>
#include <cstring>

using namespace std;


void myFunction1(string fname, int age=10) {
  cout << fname << " is " << age << " years old. \n";
}

void myFunction2(string fname, int age) {
  cout << fname << " is " << age << " years old. \n";
}

void myFunction1(string fname, string lname) {
  cout << fname << "  " << lname << " is 20 years old. \n";
}

// void myFunction1(string fname, string lname, int age=10) {
//   cout << fname << "  " << lname << " is " << age << " years old. \n";
// }


// void myFunction1(string fname, int age=10, string lname) {
//   cout << fname << "  " << lname << " is " << age << " years old. \n";
// }

// void myFunction4(string fname, int age=10, string lname, int weight=50) {
//   cout << fname << "  " << lname << " is " << age << " years old. \n";
//   cout << fname << " weight is " << weight << " KGs ";
// }


int main() {
  myFunction1("Jenny");
  myFunction1("Liam", 5);
  myFunction1("Jack", "Pack");
  // myFunction1("Jack", "Pack", 5);


  // myFunction1("Anja", "Smith");
  // myFunction2("Liam", "ABC", 3);
  // myFunction2("Jenny", "ABC", 14);
  // myFunction2("Anja", "ABC",30);
  // myFunction2("Tom", 10, "ABC");
  // myFunction4("Tom", 10, "ABC", 70); 
  // myFunction2("Tom", "ABC");
  // myFunction3("Tom", "ABC"); 
  return 0;
}