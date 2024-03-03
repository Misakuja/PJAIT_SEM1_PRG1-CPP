#include <iostream>
#include <math.h>
using namespace std;

int a, a1, b, b1, nwp;

int main() {
    cout << "Assign a value to a" << endl;
    cin >> a;
    cout << "Assign a value to b" << endl;
    cin >> b;

    if(a > 0 && b > 0) {
        a1 = a;
        b1 = b;
        while (a1 != b1) {
            if (a1 > b1) {
                a1 = a1 - b1;
            } else {
                b1 = b1 - a1;
            }
        }
        nwp = a1;
        cout << "NWP of these numbers is: " << nwp << endl;
    } else {
        cout << "No results available" << endl;
    }


    return 0;
}