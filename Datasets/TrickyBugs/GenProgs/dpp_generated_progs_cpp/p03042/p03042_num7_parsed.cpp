#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    if ((S.substr(0, 2) >= "01" && S.substr(0, 2) <= "12") && (S.substr(2, 2) >= "01" && S.substr(2, 2) <= "12")) {
        cout << "AMBIGUOUS" << endl;
    } else if ((S.substr(0, 2) >= "01" && S.substr(0, 2) <= "12") && (S.substr(2, 2) >= "13" && S.substr(2, 2) <= "99")) {
        cout << "MMYY" << endl;
    } else if ((S.substr(0, 2) >= "13" && S.substr(0, 2) <= "99") && (S.substr(2, 2) >= "01" && S.substr(2, 2) <= "12")) {
        cout << "YYMM" << endl;
    } else {
        cout << "NA" << endl;
    }

    return 0;
}
