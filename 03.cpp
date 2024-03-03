#include <iostream>
#include <cmath>
using namespace std;

double R, alpha, F;

int main() {

    cout << "Enter the radius" << endl;
    cin >> R;
    cout << "Enter the alpha" << endl;
    cin >> alpha;

    F = (((pow(R,2)) / 2) * (M_PI * alpha / 180 - sin(M_PI * alpha / 180)));

    cout << F;

    return 0;
}
