#include <iostream>
#include <Windows.h>
using namespace std;

void drawing(char &c, int &s) {
    for (int i = 0; i < s; ++i) {
        for (int j = 0; j <= i; j++) {
            cout << " ";
        }
        cout << c << endl;
    }
    for (int i = 0; i < s; ++i) {
        for (int j = s; j >= i + 1; j--) {
            cout << " ";
        }
        cout << c << endl;
    }
}
void changeSize(int &s) {
    cout << "What would you like to do with the symbol?" << endl << "make it bigger: +" << endl << "make it smaller: -" << endl;
    while (true) {
        if (GetAsyncKeyState(VK_OEM_PLUS) & 0x8001) {
            s++;
            break;
        } else if (GetAsyncKeyState(VK_OEM_MINUS) & 0x8001) {
            s--;
            break;
        }
    }
}
int main() {
    int howBig = 5;
    char character;

    cout << "What character would you like to use?" << endl;
    cin >> character;

    while (true) {
        if (howBig < 1) {
            cout << "Too small!" << endl;
            exit(0);
        }
        system("cls");
        drawing(character, howBig);
        Sleep(100);
        changeSize(howBig);
    }
    return 0;
}
