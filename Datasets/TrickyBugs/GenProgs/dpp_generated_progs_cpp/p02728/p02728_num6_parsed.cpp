#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;
vector<vector<int>> adj;
vector<long long> fact;
vector<int> size;
vector<int> ans;

int dfs(int node, int parent) {
    size[node] = 1;
    for (int child : adj[node]) {
        if (child == parent) continue;
        size[node] += dfs(child, node);
    }
    return size[node];
}

void calculate(int node, int parent, long long currProd) {
    ans[node] = (currProd * fact[size[node]-1]) % MOD;
    for (int child : adj[node]) {
        if (child == parent) continue;
        calculate(child, node, (ans[node] * fact[size[child]]) % MOD);
    }
}

int main() {
    int n;
    cin >> n;
    
    adj.resize(n+1);
    size.resize(n+1);
    ans.resize(n+1);
    fact.resize(n+1);
    
    fact[0] = 1;
    for (int i = 1; i <= n; i++) {
        fact[i] = (fact[i-1] * i) % MOD;
    }
    
    for (int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    dfs(1, -1);
    calculate(1, -1, 1);
    
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << endl;
    }
    
    return 0;
}