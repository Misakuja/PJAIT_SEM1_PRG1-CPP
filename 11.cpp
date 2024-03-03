#include <iostream>
using namespace std;

int main() {
    char category;
    int hoursWorked;

    cout << "What category?" << endl;
    cin >> category;
    cout << "How many hours did the employee work?" << endl;
    cin >> hoursWorked;
    float earnings = 0;

    switch (category) {
        case 'A':
            earnings = 15 * hoursWorked;
            if (hoursWorked > 40) {
                earnings += (hoursWorked - 40 ) *15;
            }
            break;
        case 'B':
            earnings = 25 * hoursWorked;
            if (hoursWorked > 40 ) {
                earnings += (hoursWorked - 40 ) *25;
            }
            break;
        case 'C':
            earnings = 30 * hoursWorked;
            if (hoursWorked > 40 ) {
                earnings += (hoursWorked - 40 ) *30;
            }
            break;
        case 'D':
            earnings = 35 * hoursWorked;
            if (hoursWorked > 40 ) {
                earnings +=(hoursWorked - 40 ) *35;
            }
            break;
    }
    if (earnings < 700) {
        earnings -= earnings * 0.15;
    }else if (earnings > 1200) {
        earnings -= earnings * 0.2;
    }else {
        earnings -= earnings * 0.25;
    }
    cout << "The employee's earnings are:"<<endl;
    cout << earnings << endl;
    return 0;
}