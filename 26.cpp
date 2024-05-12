#include <iostream>
using namespace std;

int n;

int memoryReserve() {
    cout << "n?" << endl;
    cin >> n;

    int* ptr = &n;

    cout << "address: " << ptr << endl;
    cout << "value: " << *ptr << endl;

    return *ptr;
}
int main() {
    memoryReserve();
    return 0;
}
