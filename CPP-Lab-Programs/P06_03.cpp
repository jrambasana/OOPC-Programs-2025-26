// Read data from file
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("SAMPLE.txt");
    string line;

    if(!file) {
        cout << "File not found.";
        return 0;
    }

    while(getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}
