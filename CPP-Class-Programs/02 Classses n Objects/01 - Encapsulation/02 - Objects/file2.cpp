#include<iostream>
using namespace std;

class Student
{
    int sapId;
    public:
    //constructor
        Student()
        {
            sapId = 1000;
        }
        Student(int sap)
        {
            sapId = sap;
        }

    void updateSAP(int sapNew)
    {
        sapId = sapNew;
    }

    void printSap()
    {
        cout<<"SAP ID: "<<sapId<<endl;
    }
};


int main()
{
    Student obj(5000);  // int i = 5000;
    obj.printSap();     // printf(....)

    Student obj2;           // int i;
    obj2.updateSAP(50001);  // i = 50001;
    obj2.printSap();        //  printf(....)
    return 0;
}