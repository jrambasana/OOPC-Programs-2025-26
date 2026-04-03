#include <iostream>
using namespace std;

class A {
    public:
    // A(){}
    A(int x) {   cout << "A constructor: "<< x << endl; }
};


int main()
{
    A object;
    return 0;
}