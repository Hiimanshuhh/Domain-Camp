// Print Multiplication Table of a Number
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number to print its multiplication table: ";
    cin >> num;

    cout << "Multiplication table of " << num << " is:" << endl;
    for (int i = 1; i <= 10; i++) { // Loop to generate table from 1 to 10
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
