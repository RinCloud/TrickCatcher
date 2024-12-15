#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> adj;
vector<bool> liked;
vector<bool> visited;

int bfs(int start, int d) {
    queue<pair<int, int>> q;
    q.push({start, 0});
    visited[start] = true;
    int cnt = 0;
    
    while (!q.empty()) {
        int u = q.front().first;
        int dist = q.front().second;
        q.pop();
        if (dist > d)
            continue;
        if (liked[u])
            cnt++;
        
        for (int v : adj[u]) {
            if (!visited[v]) {
                q.push({v, dist+1});
                visited[v] = true;
            }
        }
    }
    
    return cnt;
}

int main() {
    int N;
    cin >> N;
    adj.resize(N+1);
    liked.resize(N+1);
    visited.resize(N+1, false);
    
    // read edges
    for (int i = 1; i < N; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    // read liked vertices
    string s;
    cin >> s;
    for (int i = 1; i <= N; i++) {
        liked[i] = (s[i-1] == '1');
    }
    
    int ans = 0;
    // find all possible combinations of colors after the operation
    for (int i = 1; i <= N; i++) {
        if (liked[i]) {
            ans += bfs(i, N);
            break;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}