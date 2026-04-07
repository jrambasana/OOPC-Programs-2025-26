// Write C++ Programs for the following:
// Program to create a function template 
// to find the maximum of two numbers (int, float, char).

#include <iostream>
using namespace std;

// Function template to find maximum of two numbers
template <typename T>      
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Example usage of the function template
    int int1 = 10, int2 = 20;
    float float1 = 3.5, float2 = 4.5;
    char char1 = 'A', char2 = 'B';

    cout << "Maximum of " << int1 << " and " << int2 << " is: " << findMax(int1, int2) << endl;
    cout << "Maximum of " << float1 << " and " << float2 << " is: " << findMax(float1, float2) << endl;
    cout << "Maximum of " << char1 << " and " << char2 << " is: " << findMax(char1, char2) << endl;

    return 0;
}