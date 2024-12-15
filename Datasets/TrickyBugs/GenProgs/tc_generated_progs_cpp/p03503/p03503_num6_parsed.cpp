#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    bitset<10> f[n];
    int p[n][11];

    rep(i, n) {
        string s;
        char c;
        rep(j, 10) {
            cin >> c;
            s += c;
        }
        f[i] = bitset<10>(s);
    }

    rep(i, n) {
        rep(j, 11) {
            cin >> p[i][j];
        }
    }

    ll ans = -1e9;
    for (int bit = 1; bit < (1 << 10); bit++) {
        bitset<10> b(bit);
        ll now = 0;
        rep(i, n) {
            now += p[i][(b & f[i]).count()];
        }
        ans = max(ans, now);
    }

    cout << ans << endl;
    return 0;
}
