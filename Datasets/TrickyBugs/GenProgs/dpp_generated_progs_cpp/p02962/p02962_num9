#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int n = s.size();
    int m = t.size();

    int iMax = -1;
    int prefix[m];
    prefix[0] = 0;

    for (int i = 1, j = 0; i < m; i++) {
        while (j > 0 && t[i] != t[j]) {
            j = prefix[j - 1];
        }
        if (t[i] == t[j]) {
            j++;
        }
        prefix[i] = j;
    }

    for (int i = 0, j = 0; i < n; i++) {
        while (j > 0 && s[i] != t[j]) {
            j = prefix[j - 1];
        }
        if (s[i] == t[j]) {
            j++;
        }
        if (j == m) {
            int k = i - j + 1;
            if (k >= m) {
                iMax = max(iMax, (k + m - 1) / m);
            }
            j = prefix[j - 1];
        }
    }

    cout << iMax << endl;

    return 0;
}