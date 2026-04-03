// Write data to file
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("SAMPLE.txt", ios::out);
    string data;

    do
    {
        cout << "Enter data: ";
        getline(cin, data);
        // cout << data << endl;
        file << data << endl;
    }while(data != "exit");

    file.close();
    cout << "Data written successfully.";
    return 0;
}
