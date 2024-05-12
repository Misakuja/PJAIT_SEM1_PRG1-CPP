#include <iostream>
#include <Windows.h>
using namespace std;

void randomizing(int A[], int &r) {
    srand((unsigned)(time(nullptr)));
    for (int i = 0; i < 6; ++i) {
        r = rand() % 49 + 1;
        A[i] = r;

        int j = 0;
        while (j < i) {
            if (A[j] == r) {
                r = rand() % 49 + 1;
                A[i] = r;
                j = 0;
            } else {
                j++;
            }
        }
        A[i] = r;
    }
}
void sorting(int A[]) {
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6 - 1; ++j) {
            if (A[j] < A[j + 1]) {
                swap(A[j + 1], A[j]);
            }
        }
    }
}
int rerun() {
    int rerun;
        cout << "Wanna rerun the program? \n 1 - Yes \n 0 - No" << endl;
        while (true) {
            if (GetAsyncKeyState('1') & 0x0001) {
                rerun = 1;
                break;
            } else if (GetAsyncKeyState('0') & 0x0001) {
                rerun = 0;
                break;
            }
        } cout << endl;
return rerun;
}

int main() {
    int random, rerunValue;
    int *arr = new int[6];

    do {
        cout << "Our lottery winning numbers:" << endl;
        randomizing(arr, random);
        sorting(arr);

        for (int i = 0; i < 6; ++i) {
            cout << arr[i] << " ";
        } cout << endl;

        Sleep(100);
        rerunValue = rerun();
    } while (rerunValue == 1);

    delete[] arr;
    return 0;
}
