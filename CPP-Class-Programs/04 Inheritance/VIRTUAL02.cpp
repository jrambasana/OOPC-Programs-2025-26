#include <iostream>
using namespace std;

class A {
    public:
    A(){cout << "Default constructor of A \n";  }
    A(int x) {   cout << "A constructor: "<< x << endl; }
};

class B : virtual public A {
    public:
    B() : A(10) { // This will NOT initialize A
        cout << "B constructor" <<endl; 
    }
};

class C : virtual public A {
    public:
    C() : A(20) { // This will NOT initialize A
        cout << "C constructor" << endl; 
    }
};

class D : public B, public C {
    public:
    D(): A(100) { // MOST DERIVED class initializes A
        cout << "D constructor" << endl; 
}

};

int main()
{
    D object;
    return 0;
}