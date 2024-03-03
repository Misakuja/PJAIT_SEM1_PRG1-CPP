#include <iostream>
using namespace std;
int main() {
    int howBig;

    cout << "How big should our array be?" << endl;
    cin >> howBig;

    int arr[howBig];

    for (int i = 0; i < howBig; ++i) {
        cout << "Provide the next element of the array" << endl;
        cin >> arr[i];
    }
    cout << "Our array:" << endl;
    for (int i = 0; i < howBig; ++i) {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < howBig - 1; ++i) {
        if (arr[i] <= arr[i + 1]) continue;
        else {
            cout << endl << "False" << endl;
            exit(1);
        }
    }
    cout << endl << "True" << endl;
    return 0;
}