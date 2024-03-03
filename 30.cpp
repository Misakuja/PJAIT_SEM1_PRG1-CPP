#include <iostream>
#include <algorithm>
using namespace std;

int a, b, howBig, numberToCheck, sum = 0, appearanceNumber = 0, currentSum, maxSum, maxPairFirst, maxPairSecond;
int *minimal;
int *maximal;

int arr[100];
int arr2[100];
double arithmeticAvg;

void readData(int A[], int &n) {
    cout << "How big should our array be?" << endl;
    cin >> n;

    if (n > 100) {
        n = 100;
        cout << "The array maximum value has been exceeded, it has been automatically set to 100." << endl;
    }
    cout << "Provide numbers a and b, which will serve as our numerical interval" << endl;
    cin >> a >> b;

    srand((unsigned)time(nullptr));
    for (int i = 0; i < n; i++) {
        A[i] = rand() % b + a;
    }
}
void writeArray(int A[], int &n) {
    cout << "Our randomized array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    } cout << endl;
}
float arithmeticAverage(const int A[], int &n) {
    float arithmeticAvgSum = 0;
    for (int i = 0; i < n; ++i) {
        arithmeticAvgSum += A[i];
    }
    arithmeticAvg = arithmeticAvgSum / n;
    cout << "Arithmetic average: " << arithmeticAvg << endl;
    return 0;
}
int howMany(const int A[], int &n) {
    cout << "Provide a numerical value, that will be examined for how many times it has appeared in the array." << endl;
    cin >> numberToCheck;

    appearanceNumber = 0;
    for (int i = 0; i < n; ++i) {
        if (A[i] == numberToCheck) {
            appearanceNumber++;
        }
    }
    if (appearanceNumber == 0) {
        cout << "The value " << numberToCheck << " does not appear in the array" << endl;
    }
    else cout << "The times " << numberToCheck << " has appeared in the code is: " << appearanceNumber << endl;
    return 0;
}
int oddNumbers(int A[], int &n) {
    cout << "Odd numbers in our array: ";
    for (int i = 0; i < n; ++i) {
        if (A[i] % 2 != 0) {
            cout << A[i] << " ";
            sum += A[i];
        }
    }
    cout << endl << "Sum of the odd numbers: " << sum << endl;
    return 0;
}
int min(int A[], int &n) {
    minimal = min_element(A, A + n);
    cout << "Minimal element of the array: " << *minimal << endl << "Its index: [" << minimal - A << "]" << endl;
    return 0;
}
int max(int A[], int &n) {
    maximal = max_element(A, A + n);
    cout << "Maximal element of our array: " << *maximal << endl << "Its index: [" << maximal - A << "]" << endl;
    return 0;
}
void findPair(const int A[], int &n) {
    for (int i = 0; i < n; ++i) {
        currentSum = A[i] + A[i + 1];
        if (currentSum > maxSum) {
            maxSum = currentSum;
            maxPairFirst = A[i];
            maxPairSecond = A[i + 1];
        }
    }
    cout << "The pair which has the largest sum in the array is: (" << maxPairFirst << ", " << maxPairSecond << ")" << endl;
}
int mostCommon(const int A[], int &n) {
    int mostFrequent = 0;
    int frequencyCounter = 0;
    int currentFrequencyCounter = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (A[i] == A[j]) {
                currentFrequencyCounter+=1;
            }
        }
        if (currentFrequencyCounter > frequencyCounter) {
            frequencyCounter = currentFrequencyCounter;
            mostFrequent = arr[i];
        }
    }
    return mostFrequent;
}

void changing(int A[], int &n) {
    int i, j;
    cout << "Provide the indexes of the array's elements you'd like to swap." << endl;
    cin >> i >> j;

    if (i >= 0 && i < n && j >= 0 && j < n) {
        swap(A[i], A[j]);

        cout << "The new array with swapped elements: ";
        for (int k = 0; k < n; ++k) {
            cout << A[k] << " ";
        }
    } else {
        cout << "Invalid indexes";
    }
    cout << endl;
}
void copy(int A[], int B[], int &n) {
    for (int i = 0; i < n; ++i) {
        B[i] = A[i];
    }
    cout << "Our original array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    } cout << endl << "Our new, copied array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << B[i] << " ";
    }
}
int main() {
    readData(arr, howBig);
    writeArray(arr, howBig);
    arithmeticAverage(arr, howBig);
    howMany(arr, howBig);
    cout << endl;
    oddNumbers(arr, howBig);
    cout << endl;
    min(arr, howBig);
    cout << endl;
    max(arr, howBig);
    cout << endl;
    findPair(arr, howBig);
    cout << endl;
    cout << "Most frequent element in the array is: " << mostCommon(arr, howBig) << endl;
    changing(arr, howBig);
    cout << endl;
    copy(arr, arr2, howBig);
    return 0;
}