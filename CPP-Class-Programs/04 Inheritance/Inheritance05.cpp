#include <iostream>
 
using namespace std;

class Car{
    public:
    void display1(){
        cout<<"\nCar class";
    }
};
class FuelCar:public Car{
    public:
    void display2(){
        cout<<"\nFuelCar class";
    }
};
class ElecCar:public Car{
    public:
    void display3(){
        cout<<"\nElecCar class";
    }
};
class HybridCar:public
    FuelCar, public ElecCar{
    public:
    void display4(){
        cout<<"\nHybridCar class";
    }
};
int main(){
    Car c; 
    FuelCar f; 
    ElecCar e;
    HybridCar h;
    h.display4();
    h.display3();
    h.display2();
    h.display1(); // which display1() will be called here?
}