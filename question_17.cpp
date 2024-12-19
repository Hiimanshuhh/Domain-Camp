// Matrix Multiplication Using Function Overloading
#include <iostream>
using namespace std;

class Matrix {
public:
    void operate(int** A, int** B, int** result, int m, int n, int p, int operationType) {
        if (operationType == 1) {
            matrixAddition(A, B, result, m, n);
        } else if (operationType == 2) {
            matrixMultiplication(A, B, result, m, n, p);
        } else {
            cout << "Invalid operation type!" << endl;
        }
    }

private:
    void matrixAddition(int** A, int** B, int** result, int m, int n) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result[i][j] = A[i][j] + B[i][j];
            }
        }

        cout << "Matrix Addition Result:" << endl;
        printMatrix(result, m, n);
    }

    void matrixMultiplication(int** A, int** B, int** result, int m, int n, int p) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < p; j++) {
                result[i][j] = 0;
                for (int k = 0; k < n; k++) {
                    result[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        cout << "Matrix Multiplication Result:" << endl;
        printMatrix(result, m, p);
    }

    void printMatrix(int** result, int rows, int cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int m, n, p, operationType;

    cout << "Enter the dimensions of Matrix A (m x n): ";
    cin >> m >> n;
    cout << "Enter the dimensions of Matrix B (n x p): ";
    cin >> n >> p;

    int** A = new int*[m];
    int** B = new int*[m];
    int** result = new int*[m];

    for (int i = 0; i < m; i++) {
        A[i] = new int[n];
        B[i] = new int[n];
        result[i] = new int[p];
    }

    cout << "Enter elements of Matrix A: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of Matrix B: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cin >> B[i][j];
        }
    }

    cout << "Enter operation type (1 for Addition, 2 for Multiplication): ";
    cin >> operationType;

    Matrix matrixOperations;
    matrixOperations.operate(A, B, result, m, n, p, operationType);

    for (int i = 0; i < m; i++) {
        delete[] A[i];
        delete[] B[i];
        delete[] result[i];
    }

    delete[] A;
    delete[] B;
    delete[] result;

    return 0;
}
