#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const int MOD = 998244353;
const int MAXN = 201;

int dp[MAXN][MAXN][MAXN];
int fact[MAXN];
int invFact[MAXN];

int power(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

int modInverse(int a) {
    return power(a, MOD - 2);
}

int nCr(int n, int r) {
    int ans = (fact[n] * invFact[r]) % MOD;
    ans = (ans * invFact[n - r]) % MOD;
    return ans;
}

int countDirectedGraphs(int n, int k) {
    memset(dp, 0, sizeof(dp));
    dp[0][0][0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            for (int prevJ = 0; prevJ <= j; prevJ++) {
                int cnt = 0;
                for (int prevK = 0; prevK <= k; prevK++)
                    cnt = (cnt + dp[i-1][prevJ][prevK]) % MOD;

                dp[i][j][prevJ] = (dp[i][j][prevJ] + cnt) % MOD;
            }
        }

        for (int j = k; j >= 0; j--) {
            for (int prevJ = j; prevJ >= 0; prevJ--) {
                dp[i][j][prevJ] = (dp[i][j][prevJ] + dp[i][j + 1][prevJ]) % MOD;
            }
        }
    }

    int ans = 0;
    for (int j = 0; j <= k; j++) {
        for (int prevJ = 0; prevJ <= j; prevJ++) {
            ans = (ans + dp[n][j][prevJ]) % MOD;
        }
    }

    return ans;
}

signed main() {
    int n, k, p;
    cin >> n >> k >> p;

    fact[0] = 1;
    for (int i = 1; i < MAXN; i++)
        fact[i] = (i * fact[i - 1]) % MOD;

    invFact[MAXN - 1] = modInverse(fact[MAXN - 1]);
    for (int i = MAXN - 2; i >= 0; i--)
        invFact[i] = ((i + 1) * invFact[i + 1]) % MOD;

    int ans = countDirectedGraphs(n, k);
    cout << (ans * power(n, n - 2)) % MOD << endl;

    return 0;
}
