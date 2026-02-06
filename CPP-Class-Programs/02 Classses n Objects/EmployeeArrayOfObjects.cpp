#include <iostream>
using namespace std;

class Employee
{
private:
    int empId;
    float salary;

public:
    // Parameterized constructor
    Employee(int id = 0, float sal = 0.0)
    {
        empId = id;
        salary = sal;
    }

    float getSalary()
    {
        return salary;
    }

    void display()
    {
        cout << "Employee ID: " << empId
             << " | Salary: " << salary << endl;
    }
};

int main()
{
    int n;
    float totalSalary = 0;

    cout << "Enter number of employees: ";
    cin >> n;

    // Array of objects
    Employee emp[n];

    int id;
    float sal;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for Employee " << i + 1 << endl;
        cout << "Employee ID: ";
        cin >> id;
        cout << "Salary: ";
        cin >> sal;

        emp[i] = Employee(id, sal);   // constructor call
        totalSalary += emp[i].getSalary();
    }

    cout << "\n--- Employee Details ---\n";
    for (int i = 0; i < n; i++)
    {
        emp[i].display();
    }

    cout << "\nAverage Salary = " << totalSalary / n << endl;

    return 0;
}

/*
Sample output:

Enter number of employees: 3

Enter details for Employee 1
Employee ID: 101
Salary: 25000

Enter details for Employee 2
Employee ID: 102
Salary: 30000

Enter details for Employee 3
Employee ID: 103
Salary: 28000

--- Employee Details ---
Employee ID: 101 | Salary: 25000
Employee ID: 102 | Salary: 30000
Employee ID: 103 | Salary: 28000

Average Salary = 27666.7

*/