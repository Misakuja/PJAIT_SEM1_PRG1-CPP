#include <iostream>
using namespace std;
int number;

int main() {
    cout << "What number would you like to check?" << endl;
    cin >> number;

    if(number % 15 == 0){
        cout << "PlingPlang" << endl;
    }
    else if(number % 3 == 0){
        cout << "Pling" << endl;
    }
    else if(number % 5 == 0){
        cout << "Plang" << endl;
    }
    else if(number % 7 == 0){
        cout << "Plong" << endl;
    }
    else cout << number << endl;

    return 0;
}
	