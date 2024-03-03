#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int operation;
    float a, b, result;
    bool programRerun = 1;

    while (programRerun) {
        cout << "Choose the mathematical operation: \n 1) Addition \n 2) Substraction \n 3) Division \n 4) Multiplication \n 0) End the program" << endl;
        cin >> operation;
        cout << "Assign the first value to a." << endl;
        cin >> a;
        cout << "Assign the second value to b." << endl;
        cin >> b;

        switch (operation) {
            case 0:
                programRerun = false;
                break;
            case 1:
                result = a + b;
                cout << "Addition result: " << result << endl;
                break;
            case 2:
                result = a - b;
                cout << "Subtraction result: " << result << endl;
                break;
            case 3:
                result = static_cast<float>(a) / b;
                cout << "Multiplication result: " << result << endl;
                break;
            case 4:
                if ( b == 0) {
                    cout << "Do not divide by 0" << endl;
                    continue;
                } else {
                    result = a/b;
                    cout << "Division result: "<<result<<endl;
                }
                break;
        }
    }
    return 0;
}