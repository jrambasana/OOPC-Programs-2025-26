// Modify file content
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("SAMPLE.txt");
    ofstream temp("temp.txt");

    string line, oldWord, newWord;

    cout << "Enter word to replace: ";
    cin >> oldWord;
    cout << "Enter new word: ";
    cin >> newWord;

    while(getline(file, line)) {
        size_t pos;
        while((pos = line.find(oldWord)) != string::npos) {
            line.replace(pos, oldWord.length(), newWord);
        }
        temp << line << endl;
    }
    file.close();
    temp.close();

    remove("SAMPLE.txt");
    rename("temp.txt", "SAMPLE.txt");

    cout << "Modification done.";
    return 0;
}
