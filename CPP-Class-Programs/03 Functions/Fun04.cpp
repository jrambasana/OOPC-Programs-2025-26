#include<iostream>
#include <cstring>

using namespace std;

void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\t";
  }
      cout << "\n";
}

void myFunction2(int* myNumbers) {
  for (int i = 0; i < 10; i++) {
    cout << myNumbers[i] << "\t";
  }
  cout << "\n";
}

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int myNumbers2[10] = {60, 70, 80, 90, 100, 10, 20, 30, 40, 50};
    myFunction(myNumbers);
    myFunction(myNumbers2);

    myFunction2(myNumbers);
    myFunction2(myNumbers2);
    return 0;
}