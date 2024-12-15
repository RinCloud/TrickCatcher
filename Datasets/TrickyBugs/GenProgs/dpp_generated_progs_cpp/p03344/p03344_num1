#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

const int INF = 1e9;

struct Vertex {
    ll a, b;
    vector<int> adjacent;
    bool visited;
};

vector<Vertex> graph;
vector<ll> minAmount;

void BFS(int start) {
    queue<pii> q;
    q.push({start, -1});
    minAmount[start] = graph[start].a;
    while (!q.empty()) {
        int u = q.front().first;
        int prev = q.front().second;
        q.pop();
        graph[u].visited = true;
        for (int v : graph[u].adjacent) {
            if (v == prev) continue;
            if (graph[v].visited) {
                minAmount[u] = min(minAmount[u], graph[v].a);
            } else {
                q.push({v, u});
                minAmount[v] = graph[v].a;
            }
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    graph.resize(N + 1);
    minAmount.resize(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> graph[i].a >> graph[i].b;
    }
    for (int i = 1; i <= M; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].adjacent.push_back(v);
        graph[v].adjacent.push_back(u);
    }
    BFS(1);
    ll ans = 0;
    for (int i = 1; i <= N; i++) {
        ans += max(0ll, minAmount[i] - graph[i].b);
    }
    cout << ans << endl;
    return 0;
}