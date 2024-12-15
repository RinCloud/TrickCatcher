#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    string concatS = s;
    string concatT = t;

    while (concatT.length() < concatS.length()) {
        concatT += t;
    }

    if (concatS.find(concatT) != string::npos) {
        cout << -1 << endl;
        return 0;
    }

    int maxI = -1;

    for (int i = 0; i <= s.length(); i++) {
        int j = (s.length() - i) / t.length();
        string concatST = "";

        for (int k = 0; k < i; k++) {
            concatST += t;
        }

        for (int k = 0; k < j; k++) {
            concatST += s;
        }

        if (concatST.find(concatS) != string::npos) {
            maxI = i;
        }
    }

    cout << maxI << endl;

    return 0;
}