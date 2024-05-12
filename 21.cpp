#include <iostream>
using namespace std;

int a, b, c, d;
const int maxRows = 100;
const int maxCols = 100;

int main() {
    cout << "Provide the number of rows for the first array" << endl;
    cin >> a;
    cout << "Provide the number of columns for the first array" << endl;
    cin >> b;
    cout << endl;
    cout << "Provide the number of rows for the second array" << endl;
    cin >> c;
    cout << "Provide the number of columns for the second array" << endl;
    cin >> d;

    if (a != c || b != d) {
        cout << "ERROR" << endl;
        return 0;
    }
    int arr1[maxRows][maxCols];
    int arr2[maxRows][maxCols];
    int arr3[maxRows][maxCols];

    cout << "Enter elements for array A:" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << "Enter element A[" << i << "][" << j << "]: ";
            cin >> arr1[i][j];
        }
    }
    cout << "Enter elements for array B:" << endl;
    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < d; ++j) {
            cout << "Enter element B[" << i << "][" << j << "]: ";
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    cout << "Resultant matrix C:" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
