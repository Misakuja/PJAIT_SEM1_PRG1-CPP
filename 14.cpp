#include <iostream>
using namespace std;

bool test(int number) {
    if (number < 2) return false;

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n, program = 1, cont;

    while (program == 1) {
        cout << "Enter a number, which will be the end of the range checked: ";
        cin >> n;

        if (n < 2) {
            cout << "The given number is smaller than 2" << endl;
            continue;
        }

        cout << "Prime numbers in the range of 2 - " << n << " are:" << endl;

        for (int number = 2; number <= n; number++) {
            if (test(number)) {
                cout << number << endl;
            }
        }
        cout << "Would you like to rerun the program?\n1 - Yes\n0 - No\n";
        cin >> cont;
        if (cont == 0) {
            return 0;
        }
    }
}