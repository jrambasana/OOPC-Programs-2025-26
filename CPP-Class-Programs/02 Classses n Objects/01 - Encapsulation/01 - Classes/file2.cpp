#include<iostream>
using namespace std;


//creating a class
class Student //class tagname
{

};




/*
Wonder why do we need a class?
    - Remember always, a class is a user defined data type
    - You can store a number in int, float, double and a string in char[] but if I ask you for a data type which can store Bike Details? Do you have a data type?
    - That's when a class comes into picture
*/


class Bike
{
    private:
    //variables of a class -> data members
    int numOfWheels;
    string brand;
    int yearOfManufacture;

    public:
    void setData(int noWheels,string b)
    {
        numOfWheels = noWheels;
        brand = b;
    }

    void displayData()
    {
        cout<<numOfWheels<<endl;
        cout<<brand<<endl;
    }

};

int main()
{
    Bike b1; //object of class Bike like int i;
    cout<<"Size of object b1 is: "<<sizeof(b1)<<endl; //size will be sum of size of data members
    b1.setData(2,"Honda"); 
    b1.displayData(); 
    return 0;
}