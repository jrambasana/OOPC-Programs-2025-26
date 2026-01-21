#include <iostream>
 
using namespace std;
class Line {
   public:
      void setLength( double len );
      double getLength( void );
      Line();   // This is the constructor declaration
      ~Line();  // This is the destructor: declaration
 
   private:
      double length;
};
 
// Member functions definitions including constructor
Line::Line(void) {
   cout << "Object is being created" << endl;
}
Line::~Line(void) {
   cout << "Object "<<length<<" is being deleted" << endl;
}
void Line::setLength( double len ) {
   length = len;
}
double Line::getLength( void ) {
   return length;
}

void function1(){
    Line line2;
    line2.setLength(2.0);
    cout << "Length of line2 : " << line2.getLength() <<endl;
}

// Main function for the program
int main() {
   Line line1;
   line1.setLength(1.0); 
   cout << "Length of line : " << line1.getLength() <<endl;
   
   function1();

   Line line3;
   line3.setLength(3.0); 
   cout << "Length of line : " << line3.getLength() <<endl;
   return 0;
}