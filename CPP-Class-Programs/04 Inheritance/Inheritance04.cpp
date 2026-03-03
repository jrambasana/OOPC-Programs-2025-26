#include <iostream>
 
using namespace std;

class Animal{
    public:
    void display1(){
        cout<<"\nAnimal Class";
    }
};
class Elephant:public Animal{
    public:
    void display2(){
        cout<<"\nElephant class";
    }
};
class Horse:public Animal{
    public:
    void display3(){
        cout<<"\nHorse class";
    }
};
class Cow:public Animal{
    public:
    void display4(){
        cout<<"\nCow class";
    }
};
int main(){
    Animal a; 
    Elephant e; 
    Horse h; 
    Cow c;
    cout<<"\nAn Animal belongs to following class : ";
    a.display1();

    cout<<"\nAn Elephant belongs to following classes : ";
    e.display2(); 
    e.display1();

    cout<<"\nA Horse belongs to following classes : ";
    h.display3(); 
    h.display1();

    cout<<"\nA Cow belongs to following classes : ";
    c.display4(); 
    c.display1();
}