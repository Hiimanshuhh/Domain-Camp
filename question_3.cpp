// Print Odd Numbers up to N
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a positive integer: ";
    cin >> N;

    cout << "Odd numbers up to " << N << " are: ";
    for (int i = 1; i <= N; i += 2) { // Increment by 2 to get only odd numbers
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
