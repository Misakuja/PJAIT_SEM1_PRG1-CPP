#include <iostream>
using namespace std;

void DiceRoll(int &n, int &r) {
    srand((unsigned)(time(nullptr)));
    for (int i = 0; i < n; ++i) {
        r = rand() % 6 + 1;
        cout << r << " ";
    } cout << endl;
}
int main() {
    int RollNum, random, again;
    do {
        cout << "How many dice rolls would you like to do?" << endl;
        cin >> RollNum;
        cout << "Randomized rolls:" << endl;
        DiceRoll(RollNum, random);

        cout << "Would you like to rerun?\n1 - Yes\n0 - No" << endl;
        cin >> again;
    } while (again == 1);

    return 0;
}