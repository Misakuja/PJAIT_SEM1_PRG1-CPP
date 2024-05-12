#include <iostream>
using namespace std;

int first = 0, second = 1, nextNum, last;

int main () {

    cout << "Provide a number ending the fibonacci sequence" << endl;
    cin >> last;

    while (first <= last) {
        cout << first << ", ";
        nextNum = first;
        first = second;
        second = nextNum + second;

    }
}
