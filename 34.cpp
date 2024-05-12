#include <iostream>
using namespace std;

bool passLength;
bool passSpecial;
bool passNumber;
bool passBigLetter;

void checkPassword(const char A[], int &s) {
    passLength = false;
    passSpecial = false;
    passNumber = false;
    passBigLetter = false;

    if (s >= 8) {
        passLength = true;
    }
    for (int i = 0; i < s; ++i) {
        int check = static_cast<unsigned char>(A[i]);
        if ((check >= 33 && check <= 47) || (check >= 58 && check <= 64)) {
            passSpecial = true;
            break;
        }
    }
    for (int i = 0; i < s; ++i) {
        int check2 = static_cast<unsigned char>(A[i]);
        if (check2 >= 48 && check2 <= 57) {
            passNumber = true;
            break;
        }
    }
    for (int i = 0; i < s; ++i) {
        int check3 = static_cast<unsigned char>(A[i]);
        if (check3 >= 65 && check3 <= 90) {
            passBigLetter = true;
            break;
        }
    }
}
int main() {
    int check = 1;

    while(check == 1) {
        cout << "Input the password" << endl;
        string password;
        cin >> password;

        int length = static_cast<int>(password.length());
        char arr[password.length() + 1];

        for (int i = 0; i < length + 1; ++i) {
            arr[i] = password[i];
        }
        checkPassword(arr, length);

        if (passLength && passSpecial && passNumber && passBigLetter) {
            cout << "Your password is strong!" << endl;
            check = 0;
        } else {
            cout << "Your password is weak. Try again." << endl;
        }
    }
    return 0;
}
