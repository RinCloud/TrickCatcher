#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void dfs(int u, int p, vector<int>& leaves, vector<vector<int>>& tree) {
    int cnt = 0;
    for (int v : tree[u]) {
        if (v != p) {
            dfs(v, u, leaves, tree);
            cnt++;
        }
    }
    if (cnt == 0) {
        leaves[u] = 1;
    }
}

int main() {
    int N;
    cin >> N;
    
    vector<vector<int>> tree(N + 1);
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    
    vector<int> leaves(N + 1);
    dfs(1, 0, leaves, tree);
    
    int colorfulness = 0;
    for (int i = 1; i <= N; i++) {
        colorfulness = max(colorfulness, (int)tree[i].size() - 1 + leaves[i]);
    }
    
    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        if (tree[i].size() == 1) {
            cnt++;
        }
    }
    
    cout << colorfulness << " " << cnt << endl;
    
    return 0;
}