#include <iostream>
using namespace std;

enum days {
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6,
    sunday = 7,
};
int leftTillEnd(int &whenEnd, string &input, days &day) {
    if(input == "monday" || input == "Monday") {
        day = monday;
    }
    else if(input == "tuesday" || input == "Tuesday") {
        day = tuesday;
    }
    else if(input == "wednesday" || input == "Wednesday") {
        day = wednesday;
    }
    else if(input == "thursday" || input == "Thursday") {
        day = thursday;
    }
    else if(input == "friday" || input == "Friday") {
        day = friday;
    }
    else if(input == "saturday" || input == "Saturday") {
        day = saturday;
    }
    else if(input == "sunday" || input == "Sunday") {
        day = sunday;
    }
    else {
        cout << "Wrong day input" << endl;
        exit(1);
    }
    whenEnd = sunday - day;
    return whenEnd;
}
int main() {
    days day;
    string input;
    int whenEnd;

    cout << "Input a day of the week." << endl;
    cin >> input;

    leftTillEnd(whenEnd, input, day);
    cout << "The week will end in " << whenEnd << " days" << endl;
    return 0;
}
