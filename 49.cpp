#include <iostream>
#include <fstream>
#include <list>
using namespace std;

class Contact {
public:
    string name;
    string surname;
    string phoneNumber;
};
class AddressBook {
private:
    list<Contact> contacts;
public:
    void inputNewContact();
    void displayAddressBook();
    void searchBySurname();
    void saveToTxtFile();
    void loadFromTxtFile();
};
void AddressBook::inputNewContact() {
        if(contacts.size() < 100) {
            Contact newContact;
            cout << "Enter the name." << endl;
            cin.ignore();
            getline(cin, newContact.name);
            cout << "Enter the surname." << endl;
            getline(cin, newContact.surname);
            cout << "Enter the phone number." << endl;
            cin >> newContact.phoneNumber;

            contacts.push_back(newContact);
            cout << "Contact added successfully." << endl;
        } else cout << "The address book is full." << endl;
}
void AddressBook::displayAddressBook() {
    cout << "Full address book:" << endl;
    for (const auto &contact : contacts) {
        cout << contact.name << " " << contact.surname << " " << contact.phoneNumber << endl;
    }
}
void AddressBook::searchBySurname() {
    string lookForSurname;
    cout << "Enter the surname you want to filter by:" << endl;
    cin >> lookForSurname;
    cout << "All the matching surnames:" << endl;
    for (const auto &contact : contacts) {
        if (contact.surname == lookForSurname) {
            cout << contact.name << " " << contact.surname << " " << contact.phoneNumber << endl;
        }
    }
}
void AddressBook::saveToTxtFile() {
    ofstream file("53.txt");
    if(file.is_open()) {
        for (const auto &contact : contacts) {
        file << contact.name << " " << contact.surname << " " << contact.phoneNumber << endl;
        }
        cout << "Successfully saved to file." << endl;
        file.close();
    }
    else cout << "Error while saving to file." << endl;
}
void AddressBook::loadFromTxtFile() {
    ifstream file("53.txt");
    if(file.is_open()) {
        contacts.clear();
        Contact contact;

        while (file >> contact.name >> contact.surname >> contact.phoneNumber) {
            contacts.push_back(contact);
        }
        cout << "Successfully loaded from file." << endl;
    }
    else cout << "Error while loading from the file." << endl;
        file.close();
}
int main() {
    AddressBook addressBook;

    int choice;
    do {
        cout << "1. Add contact\n2. Display address book\n3. Search by surname\n4. Save to file\n5. Load from file\n6. Exit\n";
        cin >> choice;
        switch (choice) {
            case 1:
                addressBook.inputNewContact();
                break;
            case 2:
                addressBook.displayAddressBook();
                break;
            case 3:
                addressBook.searchBySurname();
                break;
            case 4:
                addressBook.saveToTxtFile();
                break;
            case 5:
                addressBook.loadFromTxtFile();
                break;
            case 6:
                break;
            default:
                cout << "Wrong number, choose one between 1-6." << endl;
        }
    } while (choice != 0);
    return 0;
}
