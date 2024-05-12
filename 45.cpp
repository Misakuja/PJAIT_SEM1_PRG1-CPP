#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <Windows.h>
using namespace std;

enum Simplifications {
    N_KEY = 0x4E,
    Y_KEY = 0x59,
    KEY_PRESSED = 0x8000,
    NO_RERUN = 0,
    RERUN = 1,
};
class Invoice {
private:
    string date;
    stringstream invNumber;
    double nettoValue;
    double bruttoValue;
    double taxPercentValue;
    double tax;
    int rerunProgram;
public:
    Invoice() : date("dd/mm/yyyy"), nettoValue(0.0), bruttoValue(0.0), taxPercentValue(0.23), tax(0), invNumber("00/0000"), rerunProgram(RERUN) {}

    void input();
    void bruttoAndTax();
    void outputCalculations();
    void invoiceNumber();
    int getRerunProgram();
};
void Invoice::input() {
    cout << "Input the invoice date, using the dd/mm/yyyy format:";
    getline(cin, date);
    cout << "Input the netto value of your invoice:";
    cin >> nettoValue;
}
void Invoice::bruttoAndTax() {
    tax = ceil(taxPercentValue * nettoValue * 100.0) / 100.0;
    bruttoValue = tax + nettoValue;
}
void Invoice::invoiceNumber() {
    srand((unsigned)(time(nullptr)));
    for (int i = 0; i < 3; ++i) {
        invNumber << rand() % 9 + 1;
    }
    invNumber << "/" << date.substr(6);
}
void Invoice::outputCalculations() {
    cout << date << " | " << invNumber.str() << endl;

    cout << "Netto: " << nettoValue << endl;
    cout << "Brutto: " << bruttoValue << endl;
    cout << "23% tax: " << tax;
    cout << endl;
}
int Invoice::getRerunProgram() {
    Sleep(100);
    cout << "Would you like to rerun the program?\nY - Yes\nN - No";
    while(true) {
        if (GetAsyncKeyState(N_KEY) & KEY_PRESSED) {
            rerunProgram = NO_RERUN;
            break;
        }
        else if (GetAsyncKeyState(Y_KEY) & KEY_PRESSED) {
            rerunProgram = RERUN;
            break;
        }
    }
    cout << endl;
    return rerunProgram;
}
int main() {
    Invoice builder;
    do {
        builder.input();
        builder.bruttoAndTax();
        builder.invoiceNumber();
        builder.outputCalculations();
    } while(builder.getRerunProgram() == RERUN);
    return 0;
}
