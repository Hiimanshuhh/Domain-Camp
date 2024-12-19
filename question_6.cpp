// Count Digits in a Number
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n == 0) {
        cout << "The number of digits in 0 is: 1" << endl;
        return 0;
    }

    int count = 0; // Variable to store the digit count
    while (n > 0) {
        n /= 10; // Remove the last digit
        count++; // Increment the count
    }

    cout << "The number of digits is: " << count << endl;
    return 0;
}
