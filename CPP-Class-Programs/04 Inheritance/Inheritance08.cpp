#include <iostream>
using namespace std;

class gp {
public:
    gp() { cout<<"Constructor of gp\n"; }
};

class p : private gp {
public:
    p() { cout<<"Constructor of p \n"; }
};

class c : public p {
public:
    c() { cout<<"Constructor of c \n"; }
};

int main() {
    c c1;
    return 0;
}