#include <iostream>
using namespace std;

class Student
{
    int m[5], sum;
    float avg;

public:
    Student(int m2[5])
    {
        sum = 0;
        for(int i=0;i<5;i++)
        {
            m[i] = m2[i];
            sum += m[i];
        }
        avg = sum / 5.0;
    }

    void display()
    {
        cout << "Marks: ";
        for(int i=0;i<5;i++)
        {
            cout << m[i] << " ";
        }
        
        cout << "Average: " << avg << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student *s[n];

    for (int i = 0; i < n; i++)
    {
        int a, b, c,d;
        cout << "\nEnter marks of student " << i + 1 << ": ";
        cin >> a >> b >> c >> d;

        s[i] = new Student(a, b, c, d);
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++)
    {
        s[i]->display();
    }

    return 0;
}