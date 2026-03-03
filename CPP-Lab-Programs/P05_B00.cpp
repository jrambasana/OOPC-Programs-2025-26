// Program to demonstrate function overloading by 
// calculating the area of a square, rectangle, and triangle.

#include <iostream>
using namespace std;

// Area of square
float area(float side) {
    return side * side;
}

// Area of rectangle
float area(float length, float breadth) {
    return length * breadth;
}

// Area of triangle
float area(float base, float height, int dummy) {
    return 0.5 * base * height;
}

int main() {
    cout << "Area of Square = " << area(4) << endl;
    cout << "Area of Rectangle = " << area(5, 3) << endl;
    cout << "Area of Triangle = " << area(6, 4, 1) << endl;

    return 0;
}