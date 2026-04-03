// Create a file
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("SAMPLE.txt");
    if(file) {
        cout << "File created successfully.";
    } else {
        cout << "Error creating file.";
    }
    file.close();
    return 0;
}
