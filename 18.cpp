#include <iostream>
using namespace std;

int a, b, version;

int main() {
    srand(time(nullptr));

    cout << "Which version of the program would you like to run? \n 1 - manual \n 2 - randomized" << endl;
    cin >> version;

    if (version == 1) {
        cout << "Enter a: " << endl;
        cin >> a;
        cout << "Enter b: " << endl;
        cin >> b;
    }
    else if (version == 2) {
        a = rand() % 100 + 1;
        b = rand() % 100 + 1;
    }
    cout << "Tokens of player A before the game: " << a << endl;
    cout << "Tokens of player B before the game: " << b << endl;
    while (a != b) {
        if (a < 0 || b < 0) {
            break;
        }
        if (a > b) {
            a = a - b;
        }
        else if (b > a) {
            b = b - a;
        }
    }
    cout << "Tokens of player A after the game: " << a << endl;
    cout << "Tokens of player B after the game: " << b << endl;

    return 0;
}