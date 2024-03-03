#include <iostream>
using namespace std;

int is_sorted(const int A[], int &n, string &c) {
    if (c == "r") {
        for (int i = 0; i < n - 1; ++i) {
            if (A[i] > A[i + 1]) {
                cout << "STDOUT 0" << endl;
                return 0;
            }
        } return 1;
    }
    else if (c == "m") {
        for (int i = 0; i < n - 1; ++i) {
            if (A[i] < A[i + 1]) {
                cout << "STDOUT 0" << endl;
                return 0;
            }
        }
        cout << "STDOUT 1" << endl;
        return 1;
    }
    else {
        cout << "STDERR -1" << endl;
        return -1;
    }
}
int main() {
    int howBig;
    string c;

    cout << "How big should the array be?" << endl;
    cin >> howBig;

    int *arr = new int[howBig];

    for (int i = 0; i < howBig; ++i) {
        cout << "Provide the next elements of the array" << endl;
        cin >> arr[i];
    }
    cout << "Assign value to C \n r - ascending \n m - descending" << endl;
    cin >> c;

    is_sorted(arr, howBig, c);
    delete[] arr;
    return 0;
}