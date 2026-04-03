// Search a word in file
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("SAMPLE.txt");
    string line, word;
    bool found = false;

    cout << "Enter word to search: ";
    cin >> word;

    while(getline(file, line)) {
        if(line.find(word) != string::npos) {
            cout << "Found: " << line << endl;
            found = true;
        }
    }

    if(!found)
        cout << "Word not found.";

    file.close();
    return 0;
}
