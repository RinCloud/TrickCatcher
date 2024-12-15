#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    bool isYYMM = false;
    bool isMMYY = false;

    int firstTwoDigits = stoi(S.substr(0, 2));
    int lastTwoDigits = stoi(S.substr(2, 2));

    if (firstTwoDigits >= 1 && firstTwoDigits <= 12) {
        isMMYY = true;
    }
    if (lastTwoDigits >= 1 && lastTwoDigits <= 12) {
        isYYMM = true;
    }

    if (isYYMM && isMMYY) {
        cout << "AMBIGUOUS";
    } else if (isYYMM) {
        cout << "YYMM";
    } else if (isMMYY) {
        cout << "MMYY";
    } else {
        cout << "NA";
    }

    return 0;
}