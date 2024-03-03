#include <iostream>
using namespace std;
double a,b,c,d,e,f,det,det1,det2,detGEN,x,y;
double arr[2][2];

double determinant(double &m, double &n, double &p, double &q) {
    arr[0][0] = m;
    arr[1][1] = n;
    arr[1][0] = p;
    arr[0][1] = q;
    det = (arr[0][0] * arr[1][1]) - (arr[1][0] * arr[0][1]);

    return det;
}
int main() {
    cout << "Provide values for a-f" << endl;
    cin >> a >> b >> c >> d >> e >> f;

    detGEN = determinant(a,d,c,b);

    det1 = determinant(e,d,f,b);
    det2 = determinant(a,f,c,e);

    x = det1/detGEN;
    y = det2/detGEN;

    cout << "x equals to: " << x << endl;
    cout << "y equals to: " << y << endl;

    return 0;
}
