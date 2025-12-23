// Usage of a simple Structure for representing Student Information 
#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    double gpa;
    string department;
};

// ---------------------- Function Definitions ----------------------
// Function to input student information
void inputData(Student &s) {
    cout << "Enter Roll Number: "; // printf("Enter Roll Number: ");
    cin >> s.rollNumber; // scanf("%d", &s.rollNumber);
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, s.name);
    cout << "Enter GPA: ";
    cin >> s.gpa;
    cin.ignore();
    cout << "Enter Department: ";
    getline(cin, s.department);
}

// Function to display student information
void displayData(Student &s) {
    cout << "\n--- Student Information ---" << endl;
    cout << "Roll Number: " << s.rollNumber << endl;
    cout << "Name: " << s.name << endl;
    cout << "GPA: " << s.gpa << endl;
    cout << "Department: " << s.department << endl;
}

// Function to check honors eligibility
bool isEligibleForHonors(Student &s) {
    return s.gpa >= 3.5;
}

// Function to update GPA
void updateGPA(Student &s, double newGPA) {
    if (newGPA >= 0.0 && newGPA <= 4.0) {
        s.gpa = newGPA;
        cout << "GPA updated successfully!" << endl;
    } else {
        cout << "Invalid GPA. Must be between 0.0 and 4.0" << endl;
    }
}


// --------------------------- MAIN ---------------------------
int main() {
    Student student1;  
    inputData(student1);
    displayData(student1);
    if (isEligibleForHonors(student1)) {
        cout << "This student is eligible for honors!" << endl;
    } else {
        cout << "This student is not eligible for honors." << endl;
    }
    updateGPA(student1, 3.8);
    displayData(student1);

    Student student2;  
    inputData(student2);
    displayData(student2);
    if (isEligibleForHonors(student2)) {
        cout << "This student is eligible for honors!" << endl;
    } else {
        cout << "This student is not eligible for honors." << endl;
    }
    updateGPA(student2, 3.0);
    displayData(student2);

    return 0;
}
