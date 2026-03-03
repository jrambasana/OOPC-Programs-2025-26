#include <iostream>
 
using namespace std;

class ABC {
    public:
    void setProtMemb(int i)
    {
        protMemb = i; 
    }
    void Display()
    {
        cout<<protMemb<<endl;
    }

protected:
    int protMemb;
    void ProtMethod()
    {
        cout<<"\nProtMethod Access allowed";
    }
};
class XYZ : public ABC{
    public:
    void useProtMethod(){
        ProtMethod(); 
    }
};

int main() {
    ABC a; XYZ x;
    a.protMemb;       //error, protMemb is protected
    a.setProtMemb(0);   //OK,uses public access function
    a.Display();
    a.ProtMethod();       //error, ProtMethod() is protected
    x.setProtMemb(5);   //OK,uses public access function
    x.Display();
    x.useProtMethod();    // OK, uses public access function
}




