// Inheritance with Student and Result Classes
#include <iostream>
using namespace std;

class Student {
protected:
    int rollNumber;
    string name;

public:
    void setStudentDetails(int roll, string studentName) {
        rollNumber = roll;
        name = studentName;
    }

    void displayStudentDetails() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
    }
};

class Result : public Student {
private:
    double marks1, marks2, marks3;

public:
    void setMarks(double m1, double m2, double m3) {
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }

    void calculateTotalAndPercentage() {
        double total = marks1 + marks2 + marks3;
        double percentage = (total / 300) * 100;

        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }

    void displayResult() {
        displayStudentDetails();
        calculateTotalAndPercentage();
    }
};

int main() {
    Result studentResult;
    int roll;
    string name;
    double m1, m2, m3;

    cout << "Enter Roll Number: ";
    cin >> roll;
    cout << "Enter Name: ";
    cin >> name;

    studentResult.setStudentDetails(roll, name);

    cout << "Enter marks for three subjects: ";
    cin >> m1 >> m2 >> m3;

    studentResult.setMarks(m1, m2, m3);

    cout << "\nStudent Details and Result:" << endl;
    studentResult.displayResult();

    return 0;
}
