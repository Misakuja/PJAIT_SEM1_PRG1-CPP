#include <iostream>
using namespace std;

void sort_quick(int A[], int low, int high) {
    if (low < high) {
        int pivot = A[high];
        int i = low - 1;

        for (int j = low; j <= high - 1; j++) {
            if (A[j] <= pivot) {
                i++;
                swap(A[i], A[j]);
            }
        }

        swap(A[i + 1], A[high]);

        sort_quick(A, low, i);
        sort_quick(A, i + 2, high);
    }
}
int main() {
    int howBig;

    cout << "How big should our array be?" << endl;
    cin >> howBig;

    int A[howBig];

    for (int i = 0; i < howBig; ++i) {
        cout << "Provide the next element of the array" << endl;
        cin >> A[i];
    }
    cout << "Our array:" << endl;
    for (int i = 0; i < howBig; ++i) {
        cout << A[i] << " ";
    }

    sort_quick(A, 0, howBig - 1);

    cout << endl << "Sorted array:" << endl;
    for (int i = 0; i < howBig; i++) {
        cout << A[i] << " ";
    }
    return 0;
}
