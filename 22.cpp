#include <iostream>
using namespace std;

void sorting(int arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main() {
    int length;
    cout << "How many numbers would you like to sort?" << endl;
    cin >> length;

    int *arr = new int[length];

    for (int i = 0; i <= length - 1; i++) {
        if (i == 0) {
            cout << i + 1 << ". Provide the first number." << endl;
        }
        else if (i == length - 1) {
            cout << i + 1 << ". Provide the last number." << endl;
        }
        else {
            cout << i + 1 << ". Provide the next number." << endl;
        }
        cin >> arr[i];
    }
    sorting (arr, length);

    cout << "Sorted numbers: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i];
        if (i < length - 1) {
            cout << ", ";
        }
    }
    delete[] arr;
    return 0;
}