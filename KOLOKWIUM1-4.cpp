#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Enter our N - which is both the height and width of our array." << endl;
    cin >> N;

    int arr[N][N];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "Enter element at position [" << i << "," << j << "]" << endl;
            cin >> arr[i][j];
        }
    }
    cout << "Our array:" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int diagnoalSum = 0;
    for (int i = 0; i < N; i++) {
        diagnoalSum += arr[i][i];
    }
    cout << diagnoalSum;
}