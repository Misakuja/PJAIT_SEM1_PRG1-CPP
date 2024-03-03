#include <iostream>
using namespace std;

string word;
int wl = word.length();

int main() {
    cout << "Provide a word to check." << endl;
    cin >> word;
    wl = word.length();

    //casting the string to a character array
    char arr[wl + 1];
    for (int i = 0; i < wl; i++) {
        arr[i] = word[i];
    }
    bool palindromeCheck = true;
    for (int i = 0, j = wl - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            cout << "Given word is not a palindrome." << endl;
            palindromeCheck = false;
            break;
        }
    }
    if (palindromeCheck) {
        cout << "Given word is a palindrome." << endl;
    }
    return 0;
}