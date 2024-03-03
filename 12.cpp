#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int p, q, winnings, program, version, cont;

int main() {
    srand((unsigned)time(nullptr));

    program = 1;

    while (program == 1) {
        cout << "Choose the program version\n 1 - manual, 2 - automatic/randomized" << endl;
        cin >> version;

        switch (version) {
            case 1:
                if (version == 1) {
                    cout << "Assign the value p" << endl;
                    cin >> p;
                    cout << "Assign the value q" << endl;
                    cin >> q;
                }
                break;
            case 2:
                if (version == 2) {
                    p = (double)rand ()/RAND_MAX * 6 + 1;
                    q = (double)rand ()/RAND_MAX * 6 + 1;
                }
                break;

            default:
                cout << "Wrong value" << endl;
                continue;
        }

        if ((p == 2 || p == 4 || p == 6) && (q == 2 || q == 4 || q == 5)) {
            winnings = p + 3 * q;
        }
        else if ((p == 2 || p == 4 || p == 6) && (q == 1 || q == 3 || q == 6)) {
            winnings = 2 * q;
        }
        else if ((p == 1 || p == 3 || p == 5) && (q == 1 || q == 3 || q == 6)) {
            if (p == q) winnings = 5 * p + 3;
            else winnings = 2 * q + p;
        }
        else if ((p == 1 || p == 3 || p == 5) && (q == 2 || q == 4 || q == 5)) {
            winnings = min(p, q) + 4;
        }
        else {
            cout << "Wrong combinations p and q" << endl;
            continue;
        }

        cout << "Your winnings are: " << winnings << endl;

        cout << "Would you like to rerun the program? \n 1 - Yes \n 0 - No" << endl;
        cin >> cont;
        if (cont == 0) {
            return 0;
        }
        else system ("cls");

    }
}