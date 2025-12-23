#include<iostream>
#include <cstring>
using namespace std;
class Student {
    int rollNo;     char name[50];     int age;  float height, weight;
    public:
    Student(int r, char n[], int a, float h, float w)  {   
        rollNo = r;       age = a;        strcpy(name, n);    
        height = h;       weight = w;        
    }  
    void printDetails()    {
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Height: "<<height<<endl;
        cout<<"Weight: "<<weight<<endl;
    }
    void setRollNo(int r)
    {        rollNo = r;        }
    int getRollNo()
    {        return rollNo;     }
    void setName(char n[])
    {        strcpy(name, n);   }
    char* getName()
    {        return name;       }
    void setAge(int a)
    {        age = a;           }
    int getAge()
    {        return age;        }
    void setHeight(float h)
    {        height = h;        }
    float getHeight()
    {        return height;     }
    void setWeight(float w)
    {        weight = w;        }
    float getWeight()
    {        return weight;     }
};

int main()
{
    Student stu1(101, "Alice", 20, 5.5, 55.0);    
    stu1.printDetails();

    stu1.setName("Bob");
    stu1.setRollNo(102);
    cout<<"Updated Details:"<<endl;
    stu1.printDetails();

    cout<<"Roll No: "<<stu1.getRollNo()<<endl;
    cout<<"Name: "<<stu1.getName()<<endl;

    return 0;
}