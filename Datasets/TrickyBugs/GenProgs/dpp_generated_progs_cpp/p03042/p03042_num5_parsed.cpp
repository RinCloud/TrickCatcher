#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int first_YY = stoi(S.substr(0, 2));
    int second_YY = stoi(S.substr(2, 2));
    int first_MM = stoi(S.substr(0, 2));
    int second_MM = stoi(S.substr(2, 2));

    if ((first_YY >= 1 && first_YY <= 12) && (second_YY >= 1 && second_YY <= 12)) {
        cout << "AMBIGUOUS" << endl;
    } else if (first_YY >= 1 && first_YY <= 12) {
        cout << "MMYY" << endl;
    } else if (second_YY >= 1 && second_YY <= 12) {
        cout << "YYMM" << endl;
    } else {
        cout << "NA" << endl;
    }

    return 0;
}