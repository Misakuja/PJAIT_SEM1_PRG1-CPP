#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int findEq(string &line, int &length) {
    int EqualIndex = -1;

    for(int i = 0; i < length; i++) {
        if (line[i] == '=') {
            EqualIndex = i;
        }
    }
    return EqualIndex;
}
string getSymbol(string &line, int &length) {
    int EqualIndex = findEq(line, length);

    if (EqualIndex != -1 && length > EqualIndex) {
        return line.substr(EqualIndex + 1);
    }
    return "Error";
}
int getAmount(string &line, int &length) {
    int EqualIndex = findEq(line, length);

    if (EqualIndex != -1 && length > EqualIndex) {
        return stoi(line.substr(EqualIndex + 1));
    }
    return -1;
}
void output(int &amount, string &symbol) {
    for (int i = 0; i < amount; ++i) {
        cout << symbol;
    }
    cout << endl;
}
int main() {
    ifstream file("39.txt");
    string line, symbol;
    int amount;

    getline(file, line);
    int length = line.length();
    symbol = getSymbol(line, length);

    getline(file, line);
    amount = getAmount(line, length);

    output(amount, symbol);
    return 0;
}