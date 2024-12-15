#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
vector<vector<int>> adj;
vector<int> colors;
 
void dfs(int v, int p, int d) {
    colors[v] = min(colors[v], d);
    for (int u : adj[v]) {
        if (u != p) {
            dfs(u, v, d + 1);
        }
    }
}
 
int main() {
    int N;
    cin >> N;
 
    adj.resize(N+1);
    colors.resize(N+1, 1e9);
 
    for (int i = 0; i < N-1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
 
    string s;
    cin >> s;
 
    for (int i = 1; i <= N; i++) {
        if (s[i-1] == '1') {
            dfs(i, 0, 0);
        }
    }
 
    int max_dist = *max_element(colors.begin(), colors.end());
    int cnt = count(colors.begin(), colors.end(), max_dist);
 
    cout << cnt << endl;
 
    return 0;
}