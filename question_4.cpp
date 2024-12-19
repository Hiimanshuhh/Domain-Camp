//  Sum of Odd Numbers up to N
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a positive integer: ";
    cin >> N;

    int sum = 0;
    for (int i = 1; i <= N; i += 2) { // Loop through odd numbers only
        sum += i;
    }

    cout << "The sum of odd numbers up to " << N << " is: " << sum << endl;

    return 0;
}
