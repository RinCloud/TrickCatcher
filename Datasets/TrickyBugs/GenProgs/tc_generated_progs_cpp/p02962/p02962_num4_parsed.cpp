#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

string s, t, pat;
int ans[500005];

vector <int> build_fail(const string &p) {
    int len = (int)p.size(), j = -1;
    vector <int> fail(len + 1, 0); fail[0] = -1;
    for (int i = 1; i <= len; fail[i++] = ++j)
        while (j >= 0 && p[j] != p[i - 1]) j = fail[j];
    return fail;
}

vector <int> kmp_match(const string &t, const string &p, const vector <int> &fail) {
    int n = (int)t.size(), m = (int)p.size();
    vector <int> len(n, 0);
    for (int i = 0, j = 0; i < n; ++i) {
        while (j >= 0 && p[j] != t[i]) j = fail[j];
        len[i] = ++j;
    }
    return len;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> s >> t, pat = s;
    int n = (int)s.size(), m = (int)t.size();
    int exsize = n + m << 1;
    while ((int)s.size() < exsize) s += pat;
    s += pat, n = (int)s.size();
    vector <int> len = kmp_match(s, t, build_fail(t));
    for (int i = n - 1; ~i; --i)
        if (len[i] == m) ans[i - m + 1] = max(ans[i - m + 1], ans[i + 1] + 1);
    int res = *max_element(ans, ans + n + 1);
    if (res >= n / m - 2) return cout << "-1" << endl, 0;
    cout << res << endl;
    return 0;
}
