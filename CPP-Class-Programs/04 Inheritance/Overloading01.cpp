#include <iostream>
using namespace std;
 
class HelloWorld {
   public:
      void saysHello(int i) {
        cout << "sayHelloing int: " << i << endl;
      }
      void saysHello(double  f) {
        cout << "sayHelloing float: " << f << endl;
      }
      void saysHello(char* c) {
        cout << "sayHelloing character: " << c << endl;
      }
};

int main(void) {
   HelloWorld guy;
   
   guy.saysHello(5);   
   guy.saysHello(500.263);   
   guy.saysHello("Hello C++");
 
   return 0;
}