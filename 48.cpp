#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Person {
public:
    string name;
    string surname;
    int yearOfBirth;

Person() : name("NO_INPUT"), surname("NO_INPUT"), yearOfBirth(0) {}

Person(Person &object) {
    surname = object.surname;
    yearOfBirth = object.yearOfBirth;
    name = object.name;
    reverse(name.begin(), name.end());
}
void input() {
    cout << "Enter the name." << endl;
    getline(cin, name);
    cout << "Enter the surname." << endl;
    getline(cin, surname);
    cout << "Enter the year of birth." << endl;
    cin >> yearOfBirth;
}
};
int main(){
    Person personIn;

    personIn.input();
    Person copy = personIn;

    cout << "Original:\n" << personIn.name << " " << personIn.surname << "\n" << personIn.yearOfBirth << "\n\n";
    cout << "Copied:\n" << copy.name << " " << copy.surname << "\n" << copy.yearOfBirth << endl;
    return 0;
}
