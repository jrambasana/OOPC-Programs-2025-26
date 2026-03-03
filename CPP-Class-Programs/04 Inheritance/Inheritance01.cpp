#include <iostream>
 
using namespace std;

class Animal{ 
    protected:
        int legs=4; 
    public: 
    void display1(){ 
        cout<<"\nLegs="<<legs; 
    } 
}; 
class Dog : protected Animal
{ 
    bool tail = true; 
    public: 
    void display2()
    { 
        legs = 3; // why is this accessible here?
        cout<<"\nTail="<<tail; 
    } 
}; 
class SpecialDog : public Dog
{ 
    public: 
    void display3()
    { 
        legs = 2;
        cout<<"\nLegs="<<legs; //whys is this accessible here?
    } 
};
int main() 
{ 
    Animal a1;
    Dog d1; 
    // d1.legs = 5;
    d1.display1(); 
    d1.display2(); 
    d1.display1(); 
    return 0;
}