#include <iostream>
using namespace std;
 
class Box {
   protected:
      double width;
};

class SmallBox:Box { // SmallBox is the derived class.
   public:
   double getSmallWidth(void) {
      return width ;
   }
   void setSmallWidth( double wid ) {
      width = wid;
   }
};

// Main function for the program
int main() {
   SmallBox box;
 
   // set box width using member function
   box.setSmallWidth(5.0);
   cout << "Width of box : "<< box.getSmallWidth() << endl;

   // box.width = 10;0; // ERROR: width is protected
 
   return 0;
}