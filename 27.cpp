#include <iostream>
using namespace std;

int main() {
    srand(time(NULL));
    int n = 0, sum = 0;
    cout << "Enter the amount of elements of our array" << endl;
    cin >> n;
    if (n <= 0) {
        cout << "Error, amount of elements cannot be lower than 0" << endl;
        return 0;
    }
    int* dynamicArr = new int[n];

    for (int i = 0; i <= n; i++) {
        dynamicArr[i] = rand();
    }
    for (int i = 0; i <= n; i++) {
        cout << dynamicArr[i] << " ";
    }
    for (int i = 0; i <= n; i++) {
        sum += dynamicArr[i];
    }
    cout << endl;
    cout << "Summed up elements of our array equal to: " << sum << endl;
    return 0;
}