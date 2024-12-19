// Reverse a Number
#include <iostream>
using namespace std;

int main() {
    int n, reversedNumber = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    while (n > 0) {
        int lastDigit = n % 10;             
        reversedNumber = reversedNumber * 10 + lastDigit; 
        n /= 10;                           
    }

    cout << "The reversed number is: " << reversedNumber << endl;

    return 0;
}
