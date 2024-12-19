// Check if a Number is Prime
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) { // Check divisors up to the square root of num
        if (num % i == 0) {
            return false; // If divisible, not a prime number
        }
    }
    return true; // Prime number
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
