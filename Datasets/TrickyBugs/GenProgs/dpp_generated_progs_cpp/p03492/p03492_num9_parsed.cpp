#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

vector<vector<int>> adj;
vector<vector<ll>> dp;
vector<ll> fact;

void dfs(int v, int p) {
    dp[v][0] = 1;
    for (int u : adj[v]) {
        if (u == p) continue;
        dfs(u, v);
        for (int i = 1; i <= adj.size(); i++) {
            dp[v][i] = (dp[v][i] + dp[u][i - 1]) % mod;
        }
    }
}

ll powmod(ll x, ll n, ll m) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * x % m;
        x = x * x % m;
        n >>= 1;
    }
    return res;
}

ll inv(ll x) {
    return powmod(x, mod - 2, mod);
}

ll comb(int n, int k) {
    if (k < 0 || k > n) return 0;
    ll res = fact[n];
    res = res * inv(fact[k]) % mod;
    res = res * inv(fact[n - k]) % mod;
    return res;
}

int main() {
    int N;
    cin >> N;

    adj.resize(N + 1);
    dp.assign(N + 1, vector<ll>(N + 1, 0));

    for (int i = 0; i < N - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0);

    fact.resize(N + 1);
    fact[0] = 1;
    for (int i = 1; i <= N; i++) {
        fact[i] = fact[i - 1] * i % mod;
    }

    ll ans = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= i; j++) {
            ll val = (dp[1][i] - dp[1][j] + mod) % mod;
            val = val * comb(i, j) % mod * fact[N - i] % mod;
            val = val * (i % 2 == 1 ? 1 : mod - 1) % mod;
            ans = (ans + val) % mod;
        }
    }

    cout << ans << endl;
    return 0;
}