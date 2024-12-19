// Function Overloading with Hierarchical Structure
#include <iostream>
using namespace std;

class Employee {
public:
    double calculateSalary(double stipend) {
        return stipend;
    }

    double calculateSalary(double baseSalary, double bonuses) {
        return baseSalary + bonuses;
    }

    double calculateSalary(double baseSalary, double bonuses, double performanceIncentives) {
        return baseSalary + bonuses + performanceIncentives;
    }
};

int main() {
    Employee e;
    double stipend, baseSalary, bonuses, performanceIncentives;

    cout << "Enter stipend for intern: ";
    cin >> stipend;
    cout << "Intern salary: " << e.calculateSalary(stipend) << endl;

    cout << "Enter base salary and bonuses for regular employee: ";
    cin >> baseSalary >> bonuses;
    cout << "Regular employee salary: " << e.calculateSalary(baseSalary, bonuses) << endl;

    cout << "Enter base salary, bonuses, and performance incentives for manager: ";
    cin >> baseSalary >> bonuses >> performanceIncentives;
    cout << "Manager salary: " << e.calculateSalary(baseSalary, bonuses, performanceIncentives) << endl;

    return 0;
}
