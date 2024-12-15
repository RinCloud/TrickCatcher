#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> adj;
vector<int> likes;
vector<int> cnt;

void bfs(int start) {
    queue<int> q;
    vector<bool> visited(adj.size(), false);
    
    q.push(start);
    visited[start] = true;
    cnt[start] = likes[start];
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
                cnt[v] = min(cnt[u] + likes[v], 1);
            }
        }
    }
}

int main() {
    int N;
    cin >> N;
    
    adj.resize(N + 1);
    likes.resize(N + 1);
    cnt.resize(N + 1, 0);
    
    for (int i = 0; i < N - 1; ++i) {
        int a, b;
        cin >> a >> b;
        
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    string s;
    cin >> s;
    
    for (int i = 1; i <= N; ++i) {
        likes[i] = s[i - 1] - '0';
    }
    
    bfs(1);
    
    int res = 0;
    for (int i = 1; i <= N; ++i) {
        res += cnt[i];
    }
    
    cout << res << endl;
    
    return 0;
}