#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int lineNum;
    string nextLine;

    ofstream outFile;
    outFile.open("40.txt");

    srand((unsigned)(time(nullptr)));
    lineNum = rand() % 1000 + 1;

    for (int i = 0; i < lineNum; ++i) {
        outFile << rand() % 999999 + 1 << endl;
    }
    outFile.close();

    ifstream inFile("40.txt");
    ofstream tempFile("temp.txt");

    for (int i = 0; i < lineNum; ++i) {
        getline(inFile, nextLine);

        int length = nextLine.length();
        int sum = 0;

        char arr[length + 1];
        for (int i = 0; i < length; i++) {
            arr[i] = nextLine[i];
        }
        for (int j = 0; j < length; ++j) {
            sum = sum + static_cast<int>(arr[j] - '0');
        }
        tempFile << nextLine << ", sum: " << sum << endl;
    }
    inFile.close();
    tempFile.close();

    remove("40.txt");
    rename("temp.txt", "40.txt");

    return 0;
}