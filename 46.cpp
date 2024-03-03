#include <iostream>
using namespace std;

class worker {
public:
    void readData();
    void printData();
private:
    string name;
    string surname;
    string street;
    string houseNumber;
    string postalCode;
    string town;
};
void worker::readData() {
    cout << "Input the name of the employee" << endl;
    getline(cin, name);
    cout << "Input the surname of the employee" << endl;
    getline(cin, surname);
    cout << "Input the street the employee lives on" << endl;
    getline(cin, street);
    cout << "Input the house number of the employee's house" << endl;
    getline(cin, houseNumber);
    cout << "Input the postal code of the employee's town" << endl;
    getline(cin, postalCode);
    cout << "Input the town the employee lives in" << endl;
    getline(cin, town);
}
void worker::printData() {
    cout << "----------------------------" << endl;
    cout << name << " " << surname << endl;
    cout << "st. " << street << " " << houseNumber << endl;
    cout << postalCode << " " << town << endl;
    cout << "----------------------------" << endl;
}
int main() {
    worker classWork;
    classWork.readData();
    classWork.printData();
    return 0;
}