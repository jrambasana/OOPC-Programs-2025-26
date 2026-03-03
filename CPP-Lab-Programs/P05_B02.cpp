#include <iostream>
using namespace std;

class Shape {
public:

    // Area of Square
    float calculateArea(float side) {
        return side * side;
    }

    // Area of Rectangle
    // Area of Triangle
    float calculateArea(float base, float height, int choice) 
    {
        if (choice == 2) {
            return base * height; // Rectangle area
        }   
        else if (choice == 3) {
            return 0.5 * base * height;
        }
        else {
            return 0; // Invalid choice
        }
    }
};

int main() {

    Shape s;
    int choice;

    cout << "Choose Shape to Calculate Area" << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if(choice == 1) {
        float side;
        cout << "Enter side of square: ";
        cin >> side;
        cout << "Area of Square = " << s.calculateArea(side) << endl;
    }
    else if(choice == 2) {
        float length, breadth;
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
        cout << "Area of Rectangle = " << s.calculateArea(length, breadth,choice) << endl;
    }
    else if(choice == 3) {
        float base, height;
        cout << "Enter base and height: ";
        cin >> base >> height;
        cout << "Area of Triangle = " << s.calculateArea(base, height, choice) << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}