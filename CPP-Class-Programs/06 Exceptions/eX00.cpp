
#include <iostream>
using namespace std;
int main() {
    int num1 = 10, num2 = 0;
    cout << "Program started";
    int res = num1 / num2; // This will cause a division by zero error
    cout << "Result: " << res << endl;
    return 0;
}