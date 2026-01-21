#include <iostream>
 
using namespace std;

class Box {
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
    public:
      int objectID;     // Object ID
      static int objectCount;
      // Constructor definition
      Box(double l = 2.0, double b = 2.0, double h = 2.0) {
         length = l;
         breadth = b;
         height = h;         
         // Increase every time object is created
         objectCount++;
         objectID = objectCount;
         cout <<"Box no "<<objectID<<" is created." << endl;
      }
      double Volume() {
         return length * breadth * height;
      }
      void display() {
         cout << "Box ID: " << objectID << endl;
         cout << "Volume: " << Volume() << endl;
      }
};

// Initialize static member of class Box
int Box::objectCount = 0;

void method1() {
   Box box3(3.3, 1.2, 1.5);    // Declare box1
   box3.display();
}
int main(void) {
   Box box1(3.3, 1.2, 1.5); 
   box1.display();
   Box box2(8.5, 6.0, 2.0);    // Declare box2
   box2.display();
   cout << "Total objects: " << Box::objectCount << endl;
   method1();
   cout << "Total objects: " << Box::objectCount << endl;
   return 0;
}