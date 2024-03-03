#include <iostream>
using namespace std;

int a, b;
char character;

int main () {

    cout << "Enter the width of the rectangle" << endl;
    cin >> a;
    cout << "Enter the height of the rectangle" << endl;
    cin >> b;
    cout << "Enter the character you want to use" << endl;
    cin >> character;

    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            cout << character;
        }
        cout << endl;
    }

    return 0;
}