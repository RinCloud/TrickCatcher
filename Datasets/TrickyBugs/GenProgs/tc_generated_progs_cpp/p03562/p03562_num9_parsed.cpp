#include<bits/stdc++.h>

using namespace std;

const int N = 1e6 + 10, M = 4000 + 10, mod = 998244353;

bitset<M> bs, a[N], b, on, off;
int n, m, l, mx, len[N];
char s[N];

inline void solve() {
    scanf("%d%s", &n, s + 1);
    m = strlen(s + 1);
    reverse(s + 1, s + 1 + m);
    bs.reset();
    bs[0] = 1;
    a[0][0] = 1;
    l = 1;
    for (int i = 1; i <= n; i++) {
        scanf("%s", s + 1);
        len[i] = strlen(s + 1);
        reverse(s + 1, s + 1 + len[i]);
        for (int j = 0; j < len[i]; j++) {
            if (s[j + 1] == '1') {
                a[i][j] = 1;
            }
        }
        mx = max(mx, len[i]);
        bs <<= len[i];
        for (int j = len[i]; j <= mx; j++) {
            if (a[i][j]) {
                a[i] ^= a[i - 1] << (j - len[i]);
            }
        }
        if (a[i].none()) {
            len[i] = 0;
        } else {
            bs ^= bs << len[i];
            for (int j = 0; j < len[i]; j++) {
                a[i][j] = 0;
            }
            for (int j = 0; j < M; j++) {
                if (bs[j]) {
                    bs ^= a[i] << j;
                }
            }
            int tot = 0;
            for (int j = 0; j < M; j++) {
                tot += bs[j] << j;
            }
            for (int j = 0; j < len[i]; j++) {
                if (a[i][j]) {
                    tot |= 1 << (j + l);
                }
            }
            l += len[i];
            bs[tot % M] = 1;
        }
    }
    on |= bs;
    off.reset();
    for (int i = 0; i < M; i++) {
        if (!on[i]) {
            for (int j = 0; j < M; j++) {
                if (on[j] && (j ^ i) < M) {
                    off[j ^ i] = 1;
                }
            }
        }
    }
    int ans = 1;
    for (int i = m - 1; ~i; i--) {
        ans <<= 1;
        if (s[i + 1] == '1') {
            ans |= 1;
        }
        ans %= mod;
        int t = i % M;
        if (off[t]) {
            ans = (ans + 1) % mod;
        }
    }
    printf("%d\n", ans);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        solve();
    }
    return 0;
}
