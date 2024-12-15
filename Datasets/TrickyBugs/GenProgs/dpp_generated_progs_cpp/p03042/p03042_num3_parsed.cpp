#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    bool isYYMM = false;
    bool isMMYY = false;

    int year = stoi(S.substr(0, 2));
    int month = stoi(S.substr(2, 2));

    if (year >= 0 && year <= 99 && month >= 1 && month <= 12) {
        isYYMM = true;
    }

    year = stoi(S.substr(2, 2));
    month = stoi(S.substr(0, 2));

    if (year >= 0 && year <= 99 && month >= 1 && month <= 12) {
        isMMYY = true;
    }

    if (isYYMM && isMMYY) {
        cout << "AMBIGUOUS" << endl;
    } else if (isYYMM) {
        cout << "YYMM" << endl;
    } else if (isMMYY) {
        cout << "MMYY" << endl;
    } else {
        cout << "NA" << endl;
    }

    return 0;
}
