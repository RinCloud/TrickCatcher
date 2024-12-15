#include<bits/stdc++.h>
using namespace std;
string s;
int n, ans = 0, bns = 0, k1, k2;
bool a[30], b[30];
int main() {
    cin >> n >> s;
    for (int i = 0; i < n-1; i++) {
        memset(a, false, sizeof(a));
        memset(b, false, sizeof(b));
        for (int j = 0; j <= i; j++) {
            a[s[j] - 97] = true;
        }
        for (int j = i + 1; j < n; j++) {
            b[s[j] - 97] = true;
        }
        for (int j = 0; j < 26; j++) if (a[j] == true && b[j] == true) bns++;
        if (ans < bns) ans = bns;
        bns = 0;
    }
    cout << ans;
    return 0;
}