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

    for (int i = 0; i < b; i++) { //height
        for (int j = 0; j < a; j++) { //width
            if (j == 0 || j == a - 1 || i == 0 || i == b - 1){ //distance
                cout << character;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}