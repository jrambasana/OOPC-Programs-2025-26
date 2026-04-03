#include <iostream>
using namespace std;

class Test{
public:
    int x;
    void show()
    {        cout << "X = " << x;       }
};
// void show(Test t) 
// {    cout << "X = " <<t.x;  }
int main() {
    Test t1;
    t1.x = 5;
    // show(t1);
    t1.show();
    return 0;
}
