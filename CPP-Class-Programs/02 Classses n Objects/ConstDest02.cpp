#include <iostream>

using namespace std;

class Line {

   public:
      int getLength( void );
      Line( int len );             // simple constructor
      Line( const Line &obj);  // copy constructor
      ~Line();                     // destructor

   private:
      int length;
};

// Member functions definitions including constructor
Line::Line(int len) {
   cout << "Normal constructor allocating ptr" << endl;
   
   length = len;
}

Line::Line(const Line &obj) {
   cout << "Copy constructor allocating ptr." << endl;
   length = obj.length;
}

Line::~Line(void) {
   cout << "Freeing memory!" << endl;
}

int Line::getLength( void ) {
   return length;
}

void display(Line obj) {
   cout << "Length of line : " << obj.getLength() <<endl;
}

// Main function for the program
int main() {
   Line line(10);

   display(line);

   return 0;
}