#include <iostream>
using namespace std;

class MyClass {
   public:
      static int ClassCounter;
      int classId;
      MyClass() {
         ClassCounter++;
         classId = ClassCounter;
      }
      static void displayMessage() {
         cout << "Hello, World!" << classId << endl;
      }
      void showId() {
         cout << "Class ID: " << classId << endl;
         cout << "Class Counter: " << ClassCounter << endl;
      }
};

int MyClass::ClassCounter = 0;

int main() {
   // Calling static member function
   MyClass::displayMessage();
   cout << MyClass::ClassCounter << endl;

   MyClass obj1;
   obj1.showId();
   cout << MyClass::ClassCounter << endl;

   return 0;
}