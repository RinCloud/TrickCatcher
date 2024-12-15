#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[100001];
int height[100001];

void dfs(int node, int parent, int h) {
    height[node] = h;
    for(int child : adj[node]) {
        if(child != parent) {
            dfs(child, node, h+1);
        }
    }
}

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n-1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1, 0, 0);

    int max_height = 0;
    for(int i=1; i<=n; i++) {
        max_height = max(max_height, height[i]);
    }

    cout << max_height << endl;

    return 0;
}