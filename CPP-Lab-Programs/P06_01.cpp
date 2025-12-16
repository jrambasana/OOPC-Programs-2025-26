// Write a C++ program to demonstrate the friend function concept by creating a class 

#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    friend double calculateArea(Circle c);
    friend double calculatePerimeter(Circle c);
};

double calculateArea(Circle c) {
    return 3.14159 * c.radius * c.radius;
}

double calculatePerimeter(Circle c) {
    return 2 * 3.14159 * c.radius;
}

int main() {
    Circle c(5.0);

    cout << "Radius: 5.0" << endl;
    cout << "Area: " << calculateArea(c) << endl;
    cout << "Perimeter: " << calculatePerimeter(c) << endl;

    return 0;
}