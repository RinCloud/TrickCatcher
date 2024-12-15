#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
typedef long long ll;

vector<int> adj[105];
bool visited[105];
int leafCount[105];
vector<int> colorOptions;

void dfs(int u, int p, int depth) {
    visited[u] = true;
    if (adj[u].size() == 1) {
        leafCount[depth]++;
    }
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v, u, depth + 1);
        }
    }
}

bool validColoring(int u, int p, int color) {
    vector<int> childColors;
    for (int v : adj[u]) {
        if (v == p) continue;
        childColors.push_back(validColoring(v, u, color));
    }
    if (childColors.empty()) {
        return color;
    } else {
        sort(childColors.begin(), childColors.end());
        int currColor = color;
        for (int c : childColors) {
            currColor++;
            if (c > currColor) {
                currColor = c;
            }
        }
        return currColor;
    }
}

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    int colorfulness = 1;
    for (int i = 1; i <= N; i++) {
        if (adj[i].size() > 1) {
            colorOptions.push_back(validColoring(i, -1, colorfulness));
        }
    }
    sort(colorOptions.begin(), colorOptions.end());
    
    int ans = 0;
    while (true) {
        ans++;
        if (colorOptions.empty()) break;
        int curr = colorOptions[colorOptions.size() - 1];
        colorOptions.pop_back();
        while (!colorOptions.empty() && colorOptions[colorOptions.size() - 1] == curr) {
            colorOptions.pop_back();
        }
    }
    
    memset(visited, false, sizeof(visited));
    dfs(1, -1, 0);
    
    ll leaves = 0;
    for (int i = 0; i <= N; i++) {
        if (leafCount[i] > 0) {
            leaves += leafCount[i];
        }
    }
    
    cout << ans << " " << leaves << endl;
    
    return 0;
}