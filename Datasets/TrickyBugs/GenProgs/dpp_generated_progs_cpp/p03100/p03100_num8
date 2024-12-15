#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAXN = 50005;
const int MAXQ = 50005;

struct Edge {
    int v, c;
};

int N, M, Q, MOD;
vector<Edge> adj[MAXN];
int dist[MAXN];
bool vis[MAXN];

bool check(int s, int t, int r) {
    for (int i = 1; i <= N; i++) {
        dist[i] = -1;
        vis[i] = false;
    }
    
    queue<int> q;
    q.push(s);
    dist[s] = 0;
    vis[s] = true;
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        for (const auto& e : adj[u]) {
            int v = e.v;
            int c = e.c;
            
            if (!vis[v]) {
                vis[v] = true;
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    
    if (dist[t] == -1) {
        return false;
    }
    
    int d = dist[t];
    vector<int> rem;
    
    while (d > 0) {
        rem.push_back(d % 2);
        d /= 2;
    }
    
    int ans = 0;
    int k = rem.size();
    
    for (int i = 0; i < k; i++) {
        if (r % 2 == 1) {
            ans += (1 << i);
            ans %= MOD;
        }
        r /= 2;
    }
    
    return (ans % MOD == dist[t] % MOD);
}

int main() {
    cin >> N >> M >> Q >> MOD;
    
    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }
    
    for (int i = 0; i < Q; i++) {
        int s, t, r;
        cin >> s >> t >> r;
        
        if (check(s, t, r)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}