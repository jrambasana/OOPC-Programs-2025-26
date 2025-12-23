#include<iostream>
#include<cstring>
using namespace std;
class Student
{
    int sapId;
    public:
    Student(int sap)
    {
        sapId = sap;
    }
    void printSap()
    {
        cout<<"SAP ID: "<<sapId<<endl;
    }
};
int main()
{
    Student obj(5000);    //, "John Doe");
    obj.printSap();     
}