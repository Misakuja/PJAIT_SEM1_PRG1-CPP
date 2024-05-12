#include <iostream>
using namespace std;

auto iota(int a[], int &n, int &start) -> void {
    a[0] = start;
    for (int i = 1; i < n; ++i) {
        a[i] = a[i - 1] + 1;
    }
}
int main() {
    int howBig, start;
    cout << "How big should our array be?" << endl;
    cin >> howBig;

    int *arr = new int[howBig];

    cout << "What integral number should the array start from?" << endl;
    cin >> start;

    iota(arr, howBig, start);

    for (int i = 0; i < howBig; ++i) {
    cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}
