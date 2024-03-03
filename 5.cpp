#include <iostream>
using namespace std;

string change(int number, int constant){
    string result="";
    int rest;

    while(number>0){
        rest = number % constant;
        if(rest < 10) {
            result = char(rest+48)+result;
        }
        else {
            result = char(rest + 48 + 7) + result;
            number = number / constant;
        }
    }
    return result;
}
int main() {
    int givenNumber;

    cout << "Give the number you'd like to change to hex and oct." << endl;
    cin >> givenNumber;
    cout << "Provided number in oct: " << change(givenNumber, 8) << endl;
    cout << "Provided number in hex: " << change(givenNumber, 16) << endl;
    return 0;
}