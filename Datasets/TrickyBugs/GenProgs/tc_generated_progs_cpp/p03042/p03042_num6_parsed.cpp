#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int a = stoi(S.substr(0, 2));
    int b = stoi(S.substr(2, 2));

    if (a > 0 && a < 13 && b > 0 && b < 13) {
        cout << "AMBIGUOUS";
    } else if ((a == 0 || a > 12) && (b == 0 || b > 12)) {
        cout << "NA";
    } else if (a == 0 || a > 12) {
        cout << "YYMM";
    } else {
        cout << "MMYY";
    }

    return 0;
}
