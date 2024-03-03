#include <iostream>
using namespace std;

int main() {
    int howBig;
    int counter = 1;

    cout << "How big should our array of zero and ones be?" << endl;
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
    cout << endl << "Created list: " << "[";
    for (int i = 0; i < howBig; i++) {
        if (arr[i] == 0) {
            counter = 0;
        } else {
            while (i < howBig - 1 && arr[i] == 1 && arr[i] == arr[i + 1]) {
                counter++;
                i++;
            }
        }
        if (counter != 0 && counter > 1) {
            cout << counter;
        }
        if (i < howBig - 2 && counter != 0 && counter > 1) {
            cout << ", ";
        } counter = 1;
    }

    cout << "]" << endl;
    return 0;
}