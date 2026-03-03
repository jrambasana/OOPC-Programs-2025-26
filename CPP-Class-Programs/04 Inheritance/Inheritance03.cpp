#include <iostream>
 
using namespace std;

class Liquid{
    public:
    void display1(){
        cout<<"\nLiquid class";
    }
};
class Fuel{
    public:
    void display2(){
        cout<<"\nFuel class";
    }
};
class Petrol:public Liquid,public Fuel{
    public:
    void display3(){
        cout<<"\nPetrol class";
    }
};
int main()
{
    Liquid l;
    Fuel f;
    Petrol p;

    cout<<"\nA Liquid belongs to following class : ";    
    l.display1();

    cout<<"\nA Fuel belongs to following class : ";    
    f.display2();
    
    cout<<"\nA Petrol belongs to following classes : ";
    p.display3();
    p.display2();
    p.display1();
}