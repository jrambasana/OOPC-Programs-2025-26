// Append data to file
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("SAMPLE.txt", ios::app);
    string data;

    do
    {
        cout << "Enter data to append: ";  // cin >> data;
        getline(cin, data);
        file << data << endl;
    }while(data != "exit");

    file.close();

    cout << "Data appended successfully.";
    return 0;
}
