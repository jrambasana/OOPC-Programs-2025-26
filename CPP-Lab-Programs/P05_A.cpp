// Write Program to implement a Shape base class with 
// derived classes Rectangle and Circle using runtime polymorphism 
// to calculate area.

#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    void area() {
        cout << "Area of Shape" << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
    float length, breadth;

public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    void area() {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

// Derived class Circle
class Circle : public Shape {
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Shape *s;

    Rectangle r(5, 4);
    Circle c(3);

    s = &r;
    s->area();   // Calls Shape's area (NOT Rectangle)
    r.area();   // Calls Rectangle's area

    s = &c;
    s->area();   // Calls Shape's area (NOT Circle)
    c.area();   // Calls Circle's area

    return 0;
}