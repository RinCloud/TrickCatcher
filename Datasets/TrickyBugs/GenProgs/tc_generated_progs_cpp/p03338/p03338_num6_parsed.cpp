#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    for (int i = 1; i < n; i++) {
        set<char> a, b;
        for (int j = 0; j < i; j++) {
            a.insert(s[j]);
        }
        for (int j = i; j < n; j++) {
            b.insert(s[j]);
        }
        int bns = 0;
        for (char c : a) {
            if (b.count(c)) {
                bns++;
            }
        }
        ans = max(ans, bns);
    }
    cout << ans;

    return 0;
}
