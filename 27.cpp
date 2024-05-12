#include <iostream>
using namespace std;

int a, b, temp;

void changeValues(int* ptr1, int* ptr2) {
    if (*ptr1 > *ptr2) {
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
}
int main() {
    cout << "Provide arguments 'a' and 'b'" << endl;
    cin >> a >> b;

    changeValues(&a, &b);

    cout << "Arguments after the function" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
