
#include <iostream>
using namespace std;

void function1()
{
    static int value = 10;
    cout << "Value: " << value << endl;
    value++;
}

void function2()
{
    int value2 = 10;
    cout << "Value 2: " << value2 << endl;
    value2++;
}

int main()
{
    function1();
    function1();
    function1();
    function2();
    function2();
    function2();
    return 0;
}