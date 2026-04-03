
#include <iostream>
using namespace std;

// Area of Square
float calculateArea(float side) {
    return side * side;
}

// Area of Rectangle
// Area of Triangle
float calculateArea(float a, float b, int choice) 
{
    if (choice == 2) {
        return a * b; // Rectangle area
    }   
    else if (choice == 3) {
        return 0.5 * a * b; // Triangle area
    }
    else {
        return 0; // Invalid choice
    }
}

int main() {
    int option;
    
    cout << "Choose Shape to Calculate Area" << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "Enter your choice: ";
    cin >> option;

    if(option == 1) {
        float side;
        cout << "Enter side of square: ";
        cin >> side;
        cout << "Area of Square = " << calculateArea(side) << endl;
    }
    else if(option == 2) {
        float length, breadth;
        cout << "Enter length and breadth of rectangle: ";
        cin >> length >> breadth;
        cout << "Area of Rectangle = " << calculateArea(length, breadth, option) << endl;
    }
    else if(option == 3) {
        float base, height;
        cout << "Enter base and height of triangle: ";
        cin >> base >> height;
        cout << "Area of Triangle = " << calculateArea(base, height, option) << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}