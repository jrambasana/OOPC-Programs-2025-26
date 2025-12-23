// Usage of a simple Structure for representing Student Information 
#include <iostream>
#include <string>
using namespace std;

struct Student 
{
    int rollNumber;
    string name;
    double gpa;
    string department;

    // Function to input student information
    void inputData() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter GPA: ";
        cin >> gpa;
        cin.ignore();
        cout << "Enter Department: ";
        getline(cin, department);
    }

    // Function to display student information
    void displayData() const {
        cout << "\n--- Student Information ---" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "GPA: " << gpa << endl;
        cout << "Department: " << department << endl;
    }

    // Function to check if student is eligible for honors (GPA >= 3.5)
    bool isEligibleForHonors() const {
        return gpa >= 3.5;
    }

    // Function to update GPA
    void updateGPA(double newGPA) {
        if (newGPA >= 0.0 && newGPA <= 4.0) {
            gpa = newGPA;
            cout << "GPA updated successfully!" << endl;
        } else {
            cout << "Invalid GPA. Must be between 0.0 and 4.0" << endl;
        }
    }
};

int main() {
    Student student1;
    student1.inputData();
    student1.displayData();
    if (student1.isEligibleForHonors()) {
        cout << "This student is eligible for honors!" << endl;
    } else {
        cout << "This student is not eligible for honors." << endl;
    }
    student1.updateGPA(3.8);
    // student1.gpa = 3.8; // Directly updating GPA
    student1.displayData(); 
    return 0;
}