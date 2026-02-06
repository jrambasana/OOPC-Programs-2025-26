#include <iostream>
using namespace std;

typedef int Marks[5];

int main()
{
    Marks m = {85, 90, 78, 88, 92};

    for(int i = 0; i < 5; i++)
        cout << m[i] << " ";

    return 0;
}
