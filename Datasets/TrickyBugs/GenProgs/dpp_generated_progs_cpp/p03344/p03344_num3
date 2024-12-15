#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

typedef long long ll;

struct Vertex {
    ll a, b;
    vector<int> edges;
    bool visited;
};

vector<Vertex> graph;

bool canWinGame(ll w) {
    queue<int> q;
    q.push(0); // Start from vertex 1
    graph[0].visited = true;
    
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        
        for (int next : graph[curr].edges) {
            if (!graph[next].visited && graph[next].a <= w) {
                q.push(next);
                graph[next].visited = true;
            }
        }
    }
    
    for (int i = 0; i < graph.size(); i++) {
        if (!graph[i].visited) {
            return false;
        }
    }
    
    return true;
}

ll findSmallestAmount(ll n, ll m) {
    ll left = 0;
    ll right = numeric_limits<ll>::max();
    
    while (left < right) {
        ll mid = left + (right - left) / 2;
        
        for (int i = 0; i < n; i++) {
            graph[i].visited = false;
        }
        
        if (canWinGame(mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    
    return left;
}

int main() {
    ll n, m;
    cin >> n >> m;
    
    graph.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> graph[i].a >> graph[i].b;
    }
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--; // Convert to 0-based index
        v--;
        graph[u].edges.push_back(v);
        graph[v].edges.push_back(u);
    }
    
    ll result = findSmallestAmount(n, m);
    cout << result << endl;
    
    return 0;
}