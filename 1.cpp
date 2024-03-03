#include <iostream>
using namespace std;

int sweets, students, perClassmate, leftover;

int main() {
    cout << "How many sweets did Janek's mom buy?" << endl;
    cin >> sweets;
    cout << "How many students are there in class?" << endl;
    cin >> students;

    perClassmate = sweets/(students - 1);
    leftover = sweets&(students - 1);

    cout << "Sweets per Classmate: " << perClassmate << endl;
    cout << "Leftover sweets: " << leftover << endl;
    return 0;
}


