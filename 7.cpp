#include <iostream>
using namespace std;

int a, a1, b, b1, nww;

int main() {
    cout << "Assign value to a" << endl;
    cin >> a;
    cout << "Assign value to b" << endl;
    cin >> b;

    if(a < 0 || b < 0) {
        cout << "The values have to be greater than 0" << endl;
    }
    else if(a > 0 && b > 0) {
        a1 = a;
        b1 = b;
        while (a1 != b1) {
            if (a1 > b1) {
                b1 = b1 + b;
            }
            else if (a1 < b1) {
                a1 = a1 + a;
            }
        }
        nww = a1;
        cout << "NWW equals to: " << nww << endl;
    }
    return 0;
}