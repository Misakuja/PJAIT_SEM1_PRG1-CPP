#include <iostream>
#include <ctime>
using namespace std;

int number;

int main() {
    srand((int) time(nullptr));
    int nDrawn = rand() % 100 + 1;

    cout << "Guess the random number in the 1-100 range" << endl;
    cin >> number;

    while (number != nDrawn) {
        if (number < nDrawn) {
            cout << "Your number is too low" << endl;
        }
        else if (number > nDrawn) {
            cout << "Your number is too high" << endl;
        }
        cin >> nDrawn;
    }
    if (number = nDrawn) {
        cout << "You guess correctly!" << endl;
    }
    return 0;
}