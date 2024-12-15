#include <bits/stdc++.h>
using namespace std;

map<string, int> m;
string str[120];
int main() {
    int n, m_count = 0, ma = 0;
    string st;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        str[i] = s;
        m[str[i]]++;
    }
    cin >> m_count;
    for (int i = 1; i <= m_count; i++) {
        string s;
        cin >> s;
        st = s;
        m[st]--;
    }
    for (int i = 1; i <= n; i++) {
        if (m[str[i]] > ma) ma = m[str[i]];
    }
    cout << ma;
    return 0;
}