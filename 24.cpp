#include <iostream>
#include <ctime>
using namespace std;

void fillWithout(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        arr[i] = i;
        arr[i] = arr[i] + 50;
    }
}
void fillPointers(int* arr, int length) {
    for (int i = 0; i < length; i++) {
        *(arr + i) = i;
        *(arr + i) = i + 50;
    }
}
int main() {
    long length;
    cout << "How many elements should the array have?" << endl;
    cin >> length;

    int* arrWithout = new int[length];

    time_t start = time(nullptr);
    fillWithout(arrWithout, length);
    time_t end = time(nullptr);
    cout << "Time taken to fill am array without pointers: " << difftime(end, start) << " seconds" << endl;

    delete[] arrWithout;

    int* arrWithPointers = new int[length];

    time_t start2 = time(nullptr);
    fillPointers(arrWithPointers, length);
    time_t end2 = time(nullptr);
    cout << "Time taken to fill an array with pointers: " << difftime(end2, start2) << " seconds" << endl;

    delete[] arrWithPointers;

    return 0;
}
