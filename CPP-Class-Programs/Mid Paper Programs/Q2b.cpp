/*
The following code should output 15 instead of 5. Identify the issue and resolve to give the desired outcome:
#include <iostream>
using namespace std;
void add(int x) {
    x = x + 10;
}

int main() {
    int a = 5;
    add(a);
    cout << a;
    return 0;
}

*/

#include <iostream>
using namespace std;
void add(int* x) { // change the parameter to a pointer
    *x = *x + 10;
}

int main() {
    int a = 5;
    add(&a);   // instead of passing a, we pass the address
    cout << a;
    return 0;
}