#include <iostream>
using namespace std;
int main() {
    int howBig;
    int currentFirstNumIndex = 0, currentLastNumIndex = 0;
    int longestFirstNumIndex = 0, longestLastNumIndex = 0;
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
    cout << endl;
    for (int i = 1; i < howBig; ++i) {
        if (arr[i] >= arr[i - 1]) {
            currentLastNumIndex = i;
        } else {
            if (currentLastNumIndex - currentFirstNumIndex > longestLastNumIndex - longestFirstNumIndex) {
                longestFirstNumIndex = currentFirstNumIndex;
                longestLastNumIndex = currentLastNumIndex;
            }
            currentFirstNumIndex = i;
            currentLastNumIndex = i;
        }
    }
    if (currentLastNumIndex - currentFirstNumIndex > longestLastNumIndex - longestFirstNumIndex) {
        longestFirstNumIndex = currentFirstNumIndex;
        longestLastNumIndex = currentLastNumIndex;
    }
    cout << "Our longest list: " << endl;
    for (int i = longestFirstNumIndex; i <= longestLastNumIndex; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}
