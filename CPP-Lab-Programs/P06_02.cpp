// Write a C++ program to demonstrate the friend function concept by creating a class 
// that holds private data members and a friend function that accesses and modifies those members.

#include <iostream>
using namespace std;

class MyClass {
private:
    int value;
    string name;

public:
    MyClass(int v, string n) : value(v), name(n) {}
    
    friend void modifyData(MyClass& obj, int newValue, string newName);
    friend void displayData(const MyClass& obj);
};

void modifyData(MyClass& obj, int newValue, string newName) {
    obj.value = newValue;
    obj.name = newName;
    cout << "Data modified successfully!" << endl;
}

void displayData(const MyClass& obj) {
    cout << "Value: " << obj.value << ", Name: " << obj.name << endl;
}

int main() {
    MyClass obj(100, "Initial");
    
    cout << "Original data: ";
    displayData(obj);
    
    modifyData(obj, 200, "Modified");
    
    cout << "Updated data: ";
    displayData(obj);
    
    return 0;
}