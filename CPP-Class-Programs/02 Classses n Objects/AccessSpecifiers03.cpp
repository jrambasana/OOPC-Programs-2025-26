#include <iostream>
using namespace std;
 
class Box {
   public:
      void setLength( double len ) {
         length = len;
      }
      double getLength( void ) {
         return length ;
      }
   private:
      double length;
   protected:
      double width;
};

class SmallBox:public Box { // SmallBox is the derived class.
   public:
   double getSmallBoxWidth(void) {
      return width ;
   }
   void setSmallBoxWidth( double wid ) {
      width = wid;
   }
};

// Main function for the program
int main() {
   SmallBox box;
 
   // set box width using member function
   box.setSmallBoxWidth(5.0);
   cout << "Width of box : "<< box.getSmallBoxWidth() << endl;
  

   // box.length = 10.0; // ERROR: length is private
   // box.width = 10;0; // ERROR: width is protected

   // Box b1;
   box.setLength(6.0);
   cout << "Length of box : "<< box.getLength() << endl;
 
   return 0;
}