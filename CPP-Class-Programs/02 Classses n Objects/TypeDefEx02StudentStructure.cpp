// Program: Student Structure Using typedef

#include <iostream>
#include <cstring>
using namespace std;

/*
struct Student
{
    int rollNo;
    char name[30];
    float marks;
} s1;
*/
typedef struct
{
    int rollNo;
    char name[30];
    float marks;
} Student;

int main()
{
    Student s1;

    s1.rollNo = 101;
    strcpy(s1.name, "Rahul");
    s1.marks = 88.5;

    cout << "Roll No : " << s1.rollNo << endl;
    cout << "Name    : " << s1.name << endl;
    cout << "Marks   : " << s1.marks << endl;

    return 0;
}