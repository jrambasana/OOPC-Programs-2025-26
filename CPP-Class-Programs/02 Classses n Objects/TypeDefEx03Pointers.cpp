// Program: Pointer Simplification Using typedef

#include <iostream>
using namespace std;

typedef int* IntPtr;

int main()
{
    int a = 10;
    IntPtr p = &a;
    cout << "Value of a : " << *p << endl;
    p += 10; // Pointer arithmetic
    cout << "New Pointer VALUE after adding 10: " << *p << endl;

    return 0;
}
