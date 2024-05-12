#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

enum Simplifications {
    N_KEY = 0x4E,
    Y_KEY = 0x59,
    KEY_PRESSED = 0x8000,
    NO_RERUN = 0,
    RERUN = 1
};
class Student {
private:
    string name;
    string surname;
    int questionAmount;
    int correctAnswers;
    double correctAnswersPercent;
    int rerunProgram;
public:
    Student(): name("name"), surname("surname"), questionAmount(0), correctAnswers(0), correctAnswersPercent(0.0), rerunProgram(1) {}

    void input();
    double percentCorrectAnswers();
    void output();
    int getRerunProgram();
};
void Student::input() {
    cout << "Input the amount of questions on the exam:" << endl;
    cin >> questionAmount;
    cin.ignore();
    cout << "Input the student's name:" << endl;
    getline(cin, name);
    cout << "Input the student's surname:" << endl;
    getline(cin, surname);
    cout << "Input the amount of questions the student got correct:" << endl;
    cin >> correctAnswers;
}
double Student::percentCorrectAnswers() {
return floor(correctAnswersPercent = (static_cast<double>(correctAnswers) * 100)/questionAmount);
}
void Student::output() {
cout << name << " " << surname << endl;
cout << correctAnswers << "/" << questionAmount << " | " << correctAnswersPercent << "%" << endl;
}
int Student::getRerunProgram() {
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
    Student builder;

    do {
        builder.input();
        builder.percentCorrectAnswers();
        builder.output();
} while (builder.getRerunProgram() == RERUN);
    return 0;
}
