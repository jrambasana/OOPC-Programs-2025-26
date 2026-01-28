/*
c) A university maintains student internal marks in one class and external marks in another class. Both marks are private. Write a C++ program to: 
Create two classes Internal and External
Store marks as private data members
Use a friend function to calculate and display the total marks
Constraints
Marks should not be accessed directly
Friend function should access both classes
Use constructor to initialize marks
*/

#include <iostream>
using namespace std;
class External; // Forward declaration
class Internal {
private:
    int internalMarks[5];
public:
    Internal(int marks[5]) {
        for (int i = 0; i < 5; i++) {
            internalMarks[i] = marks[i];
        }
    }
    friend void calculateTotalMarks(Internal, External);
};
class External {
private:
    int externalMarks[5];
public:
    External(int marks[5]) {
        for (int i = 0; i < 5; i++) {
            externalMarks[i] = marks[i];
        }
    }
    friend void calculateTotalMarks(Internal, External);
};

friend void calculateTotalMarks(Internal internal, External external) {
    int totalMarks[5];
    int sum = 0;
    cout << "Total Marks for each subject:" << endl;
    for (int i = 0; i < 5; i++) {
        totalMarks[i] = internal.internalMarks[i] + external.externalMarks[i];
        cout << "Subject " << (i + 1) << ": " << totalMarks[i] << endl;
    }
    for (int i = 0; i < 5; i++) {
        sum += totalMarks[i];
    }
    cout << "Total Marks of all Subjects : " << sum << endl;
}