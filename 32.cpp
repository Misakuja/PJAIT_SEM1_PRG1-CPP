#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string decToN(int &natNum, int &n) {
    string result;
    int startNum = natNum;
    if(startNum == 0) {
        result = "0";
    }
    if(startNum < 0) {
        cout << "That is not a natural number!" << endl;
        result = "Error";
    }
    if(n <= 1) {
        cout << "Wrong system conversion base!" << endl;
        result = "Error";
    }
    while (natNum > 0 && n > 1) {
        int rem = natNum % n;
        if (rem < 10 && rem > 0) {
            result += char(rem + '0');
        } else if(rem >= 10) {
            result += char(rem + '7');
        }
        natNum = natNum / n;
    }
    return result;
}
int main() {
    int number, base;
    cout << "What number would you like to convert?" << endl;
    cin >> number;
    cout << "Specify the base for the number system conversion" << endl;
    cin >> base;

    string result = decToN(number, base);
    if (result != "Error") reverse(result.begin(), result.end());
    cout << "Converted number: " << result << endl;
    return 0;
}
