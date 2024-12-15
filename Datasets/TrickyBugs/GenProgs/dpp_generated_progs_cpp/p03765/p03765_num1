#include <iostream>
#include <string>
#include <vector>

using namespace std;

string replaceCharacter(string s, int index) {
    if (s[index] == 'A')
        s.replace(index, 1, "BB");
    else
        s.replace(index, 1, "AA");
    return s;
}

string deleteSubstring(string s, int startIndex, int endIndex) {
    int length = endIndex - startIndex + 1;
    s.erase(startIndex, length);
    return s;
}

bool canTransform(string s, string t, int a, int b, int c, int d) {
    string subS = s.substr(a-1, b-a+1);
    string subT = t.substr(c-1, d-c+1);

    if (subS == subT)
        return true;

    int numA = 0, numB = 0, numAA = 0, numBB = 0;
    for (char ch : subS) {
        if (ch == 'A') {
            numA++;
            numAA = max(numAA - 1, 0);
            numBB = max(numBB - 1, 0);
        } else {
            numB++;
            numAA = max(numAA + 1, 0);
            numBB = max(numBB + 1, 0);
        }
        if (numAA == 0 && numB > 0)
            return false;
        if (numBB == 0 && numA > 0)
            return false;
    }

    return numAA == 0 && numBB == 0;
}

int main() {
    string S, T;
    int q;
    cin >> S >> T >> q;

    vector<int> a(q), b(q), c(q), d(q);
    for (int i = 0; i < q; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    for (int i = 0; i < q; i++) {
        if (canTransform(S, T, a[i], b[i], c[i], d[i]))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}