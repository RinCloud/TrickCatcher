#include <iostream>
#include <vector>
#include <algorithm>
#define MOD 1000000007
using namespace std;

vector<vector<int>> adj;
vector<int> subtree;
vector<int> factorial;

void dfs(int u, int prev) {
    subtree[u] = 1;
    for (int v : adj[u]) {
        if (v == prev) continue;
        dfs(v, u);
        subtree[u] += subtree[v];
    }
}

int power(int base, int exp) {
    int res = 1;
    while (exp > 0) {
        if (exp & 1) {
            res = (res * base) % MOD;
        }
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return res;
}

int calculate(int n, int k) {
    int numerator = factorial[n];
    int denominator = (factorial[k] * factorial[n - k]) % MOD;
    return (numerator * power(denominator, MOD - 2)) % MOD;
}

int main() {
    int n;
    cin >> n;
    
    adj.resize(n + 1);
    subtree.resize(n + 1);
    
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    factorial.resize(n + 1);
    factorial[0] = 1;
    
    for (int i = 1; i <= n; i++) {
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }
    
    dfs(1, 0);
    
    int ans = 0;
    for (int k = 1; k <= n; k++) {
        for (int u = 1; u <= n; u++) {
            if (subtree[u] >= k) {
                int ways = calculate(subtree[u] - 1, k - 1);
                ans = (ans + ways) % MOD;
            }
        }
    }
    
    cout << ans << endl;
    
    return 0;
}