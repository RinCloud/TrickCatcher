#include <iostream>
#include <string>
using namespace std;

bool isValidYYMM(string s) {
    int year = stoi(s.substr(0, 2));
    int month = stoi(s.substr(2, 2));
    return year >= 0 && year <= 99 && month >= 1 && month <= 12;
}

bool isValidMMYY(string s) {
    int month = stoi(s.substr(0, 2));
    int year = stoi(s.substr(2, 2));
    return month >= 1 && month <= 12 && year >= 0 && year <= 99;
}

int main() {
    string s;
    cin >> s;

    bool isValidInYYMM = isValidYYMM(s);
    bool isValidInMMYY = isValidMMYY(s);

    if (isValidInYYMM && isValidInMMYY) {
        cout << "AMBIGUOUS" << endl;
    } else if (isValidInYYMM) {
        cout << "YYMM" << endl;
    } else if (isValidInMMYY) {
        cout << "MMYY" << endl;
    } else {
        cout << "NA" << endl;
    }

    return 0;
}