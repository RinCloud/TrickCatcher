#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    bool isYYMM = false;
    bool isMMYY = false;

    if (S[0] == '0' || S[0] == '1') {
        if (S[2] == '0' || S[2] == '1' || S[2] == '2' || S[2] == '3') {
            isYYMM = true;
        }
    }

    if (S[2] == '0' || S[2] == '1') {
        if (S[0] == '0' || S[0] == '1' || S[0] == '2' || S[0] == '3') {
            isMMYY = true;
        }
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