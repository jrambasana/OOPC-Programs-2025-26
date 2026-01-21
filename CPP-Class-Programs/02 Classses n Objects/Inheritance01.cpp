#include <iostream>
 
using namespace std;

// Base class
class Shape {
   public:
    void setWidth(int w) {
        width = w;
    }
    void setHeight(int h) {
        height = h;
    }
    int getWidth() {
        return width;
    }
    int getHeight() {
            return height;
    }
   protected:
      int width;
      int height;
};

// Derived class
class Rectangle: public Shape {
   public:
      int getArea() { 
         return (width * height); 
      }
};

class Square: public Shape {
   public:
      int getArea() { 
         return (width * height); 
      }
};

int main(void) {
   Rectangle Rect;
 
   Rect.setWidth(5);
   Rect.setHeight(7);

   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;

//    Shape sh1;
//    sh1.setWidth(10);
//    sh1.setHeight(20);
//     cout << "Width of shape: " << sh1.getWidth() << endl;
//     cout << "Height of shape: " << sh1.getHeight() << endl;
   return 0;
}