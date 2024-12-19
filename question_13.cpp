// Encapsulation with Employee Details
#include <iostream>
using namespace std;

class Employee {
private:
    int employeeID;
    string employeeName;
    double employeeSalary;

public:
    void setEmployeeID(int id) {
        employeeID = id;
    }

    int getEmployeeID() {
        return employeeID;
    }

    void setEmployeeName(string name) {
        employeeName = name;
    }

    string getEmployeeName() {
        return employeeName;
    }

    void setEmployeeSalary(double salary) {
        employeeSalary = salary;
    }

    double getEmployeeSalary() {
        return employeeSalary;
    }

    void displayEmployeeDetails() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee Salary: " << employeeSalary << endl;
    }
};

int main() {
    Employee emp;
    int id;
    string name;
    double salary;

    cout << "Enter Employee ID: ";
    cin >> id;
    emp.setEmployeeID(id);

    cout << "Enter Employee Name: ";
    cin >> name;
    emp.setEmployeeName(name);

    cout << "Enter Employee Salary: ";
    cin >> salary;
    emp.setEmployeeSalary(salary);

    cout << "\nEmployee Details:" << endl;
    emp.displayEmployeeDetails();

    return 0;
}
