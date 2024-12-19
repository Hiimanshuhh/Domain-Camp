// Find the Sum of Digits of a Number
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    cout << "The sum of the digits is: " << sum << endl;
    return 0;
}
