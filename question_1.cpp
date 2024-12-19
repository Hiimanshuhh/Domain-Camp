// Sum of Natural Numbers up to N
#include <iostream>
using namespace std;

int main() {     
    int N;
    cout << "Enter a positive integer: ";
    cin >> N;

    // Calculate the sum using the formula
    int sum = (N * (N + 1)) / 2;

    cout << "The sum of natural numbers up to " << N << " is: " << sum << endl;

    return 0;
}
