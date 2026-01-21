// Write a C++ Program to implement a Student class using an array of objects 
// and a parameterized constructor to store marks and calculate the average of marks.
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float studentMarks[5];
    float average;
public:
    Student(){}
    Student(string n, int r, float m[]) {
        name = n;
        rollNo = r;
        for (int i = 0; i < 5; i++) {
            studentMarks[i] = m[i];
        }
        // calculateAverage();
    }
    void calculateAverage() {
        float sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += studentMarks[i];
        }
        average = sum / 5;
    }
    void display() {
        cout << "\nName: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << studentMarks[i] << " ";
        }
        cout << "\nAverage: " << average << endl;
    }
};

int main() {
    float student1Marks[] = {85, 90, 78, 92, 88};
    float student2Marks[] = {92, 88, 95, 89, 91};
    float student3Marks[] = {78, 82, 85, 80, 83};
    // int a[3] = {1,2,3};
    Student students[3] = {
        Student("Alice", 101, student1Marks),
        Student("Bob", 102, student2Marks),
        Student("Charlie", 103, student3Marks)
    };
    for (int i = 0; i < 3; i++) {
        students[i].calculateAverage();
        students[i].display();
    }
    return 0;
}
