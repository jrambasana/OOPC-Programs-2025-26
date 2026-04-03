#include <iostream>
#include <fstream>
#include <cstdio>  
using namespace std;

string filename = "SAMPLE.txt";

// Function to create file
void createFile() {
    ofstream file(filename);
    if (file) {
        cout << "File created successfully.\n";
        file.close();
    } else {
        cout << "Error creating file.\n";
    }
}

// Function to write data (overwrite)
void writeFile() {
    ofstream file(filename, ios::out);
    string data;
    cout << "Enter data to write: ";
    cin.ignore();
    getline(cin, data);

    file << data << endl;
    file.close();
    cout << "Data written successfully.\n";
}

// Function to append data
void appendFile() {
    ofstream file(filename, ios::app);
    string data;
    cout << "Enter data to append: ";
    cin.ignore();
    getline(cin, data);

    file << data << endl;
    file.close();
    cout << "Data appended successfully.\n";
}

// Function to read file
void readFile() {
    ifstream file(filename);
    string line;

    if (!file) {
        cout << "File does not exist.\n";
        return;
    }

    cout << "\nFile Contents:\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

// Function to search word
void searchFile() {
    ifstream file(filename);
    string word, line;
    bool found = false;

    cout << "Enter word to search: ";
    cin >> word;

    while (getline(file, line)) {
        if (line.find(word) != string::npos) {
            found = true;
            cout << "Found in line: " << line << endl;
        }
    }

    if (!found)
        cout << "Word not found.\n";

    file.close();
}

// Function to modify content (replace word)
void modifyFile() {
    ifstream file(filename);
    ofstream temp("temp.txt");

    string oldWord, newWord, line;

    cout << "Enter word to replace: ";
    cin >> oldWord;
    cout << "Enter new word: ";
    cin >> newWord;

    while (getline(file, line)) {
        size_t pos;
        while ((pos = line.find(oldWord)) != string::npos) {
            line.replace(pos, oldWord.length(), newWord);
        }
        temp << line << endl;
    }

    file.close();
    temp.close();

    remove(filename.c_str());
    rename("temp.txt", filename.c_str());

    cout << "Modification done successfully.\n";
}

// Function to delete file
void deleteFile() {
    if (remove(filename.c_str()) == 0)
        cout << "File deleted successfully.\n";
    else
        cout << "Error deleting file.\n";
}

// Function to display file size
void fileSize() {
    ifstream file(filename, ios::binary | ios::ate);
    if (!file) {
        cout << "File not found.\n";
        return;
    }
    cout << "File size: " << file.tellg() << " bytes\n";
    file.close();
}

// Main function
int main() {
    int choice;

    do {
        cout << "\n===== FILE HANDLING MENU =====\n";
        cout << "1. Create File\n";
        cout << "2. Write to File\n";
        cout << "3. Read File\n";
        cout << "4. Append to File\n";
        cout << "5. Search in File\n";
        cout << "6. Modify File\n";
        cout << "7. Delete File\n";
        cout << "8. File Size\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: createFile(); break;
            case 2: writeFile(); break;
            case 3: readFile(); break;
            case 4: appendFile(); break;
            case 5: searchFile(); break;
            case 6: modifyFile(); break;
            case 7: deleteFile(); break;
            case 8: fileSize(); break;
            case 9: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice.\n";
        }

    } while (choice != 9);

    return 0;
}