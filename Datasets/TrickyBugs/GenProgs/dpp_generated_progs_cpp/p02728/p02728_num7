#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int mod = 1e9 + 7;

vector<vector<int>> adj;
vector<long long> dp;
vector<long long> subdp;

// Function to calculate the factorial modulo mod
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = (fact * i) % mod;
    }
    return fact;
}

// DFS function to calculate the number of ways to write numbers on the vertices
void dfs(int u, int p) {
    dp[u] = 1;
    for (int v : adj[u]) {
        if (v == p) continue;
        dfs(v, u);
        dp[u] = (dp[u] * dp[v]) % mod;
    }
}

// Function to calculate the number of ways to write numbers on the vertices for a subtree rooted at u
void dfs_sub(int u, int p) {
    if (u != 1) {
        subdp[u] = dp[p];
        subdp[u] = (subdp[u] * subdp[u - 1]) % mod;
        subdp[u] = (subdp[u] * dp[u]) % mod;
    }
    for (int v : adj[u]) {
        if (v == p) continue;
        dfs_sub(v, u);
    }
}

int main() {
    int n;
    cin >> n;

    adj.resize(n + 1);
    dp.resize(n + 1);
    subdp.resize(n + 1);

    for (int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // Calculate the number of ways to write numbers on the vertices
    dfs(1, 0);

    // Calculate the number of ways to write numbers on the vertices for each subtree rooted at k=1, 2, ..., N
    dfs_sub(1, 0);

    // Print the results
    for (int k = 1; k <= n; k++) {
        cout << (subdp[k] * factorial(n - k)) % mod << endl;
    }

    return 0;
}