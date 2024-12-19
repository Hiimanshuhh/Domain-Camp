// Find the Largest Digit in a Number
#include <iostream>
using namespace std;

int main() {
    int n, largest = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    while (n > 0) {
        int digit = n % 10;
        if (digit > largest) {
            largest = digit;
        }
        n /= 10;
    }

    cout << "The largest digit is: " << largest << endl;
    return 0;
}
