#include <iostream>
using namespace std;
int main () {
    int width;
    char symbol;
    const char *space = " ";

    cout << "width?" << endl;
    cin >> width;
    cout << "symbol?" << endl;
    cin >> symbol;

    for (int i = width; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << symbol << space;
        }
        cout << endl;
        for (int k = i; k <= width; k++) {
            cout << space;
        }
    }

    return 0;
}