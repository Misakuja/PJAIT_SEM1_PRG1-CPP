#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 0, sum = 0, p, p1;
    char cont = 1;

    while (cont == 1) {
        cout << "Provide the value for n" << endl;
        cin >> n;

        p = sqrt(n);

        while (p > 1) {
            if (n % p == 0) {
                sum = sum + p;
                p1 = n / p;
                if (p1 != p) {
                    sum = sum + p1;
                }
            }
            p = p - 1;
        }
        sum = sum + 1;
        if (sum == n) {
            cout << "The number is perfect" << endl;
        } else {
            cout << "The number is not perfect" << endl;
        }
        cout << "Do you want to rerun the program? 1 - yes, 0 - no" << endl;
        cin >> cont;
        if (cont == 0) {
            break;
        } else cont = 1;
    }
    return 0;
}