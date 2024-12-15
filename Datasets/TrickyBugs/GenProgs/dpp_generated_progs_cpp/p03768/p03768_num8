#include<bits/stdc++.h>
using namespace std;

vector<int> graph[100005];
int colors[100005];

void dfs(int v, int d, int c) {
    if (colors[v] != 0 || d < 0) return;
    
    colors[v] = c;
    
    for (int u : graph[v]) {
        dfs(u, d - 1, c);
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    int Q;
    cin >> Q;
    
    for (int i = 0; i < Q; i++) {
        int v, d, c;
        cin >> v >> d >> c;
        dfs(v, d, c);
    }
    
    for (int i = 1; i <= N; i++) {
        cout << colors[i] << endl;
    }
    
    return 0;
}