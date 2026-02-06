// Program: Using typedef for Primitive Data Types

#include <iostream>
using namespace std;

typedef int marks;
typedef float percentage;

int main()
{
    marks m = 85;
    percentage p = 84.5;

    cout << "Marks      : " << m << endl;
    cout << "Percentage : " << p << endl;

    return 0;
}

/*
Advantages of typedef:
 
Improves code readability
Simplifies complex declarations
Makes code portable
Reduces syntax errors
*/
