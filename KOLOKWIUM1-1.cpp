#include <iostream>
using namespace std;
int main() {
    int howBig;
    int sum = 0;

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
    for (int i = 0; i < howBig; ++i) {
        if (arr[i] % 2 == 0) {
            sum = sum + arr[i];
        }
    }
    cout << endl << "The sum of our even numbers is: " << sum;
    return 0;
}