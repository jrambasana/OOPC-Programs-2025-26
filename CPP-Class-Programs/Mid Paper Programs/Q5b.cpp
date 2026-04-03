/*
class Test{
private:
    int x;
};
void show(Test t) {
    cout << t.x;
}
*/

#include <iostream>
using namespace std;

class Test{
private:
    int x;
    friend void show(Test t); // declare show as a friend function  
};
void show(Test t) {
    cout << t.x;
}
