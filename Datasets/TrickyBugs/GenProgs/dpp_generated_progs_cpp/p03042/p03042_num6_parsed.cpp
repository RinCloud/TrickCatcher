
#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    bool isYYMM = (stoi(S.substr(0, 2)) >= 1 && stoi(S.substr(0, 2)) <= 12) && (stoi(S.substr(2, 2)) >= 1 && stoi(S.substr(2, 2)) <= 12);
    bool isMMYY = (stoi(S.substr(0, 2)) >= 1 && stoi(S.substr(0, 2)) <= 12) && (stoi(S.substr(2, 2)) >= 1 && stoi(S.substr(2, 2)) <= 12);

    if (isYYMM && !isMMYY) {
        cout << "YYMM" << endl;
    } else if (!isYYMM && isMMYY) {
        cout << "MMYY" << endl;
    } else if (isYYMM && isMMYY) {
        cout << "AMBIGUOUS" << endl;
    } else {
        cout << "NA" << endl;
    }

    return 0;
}
