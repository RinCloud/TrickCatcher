#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, cost;
};

vector<int> parent;

int find(int x) {
    if (parent[x] == x) {
        return x;
    }
    return parent[x] = find(parent[x]);
}

void unite(int x, int y) {
    x = find(x);
    y = find(y);
    parent[y] = x;
}

bool isSame(int x, int y) {
    return find(x) == find(y);
}

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<Edge> edges(M);
    for (int i = 0; i < M; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].cost;
    }
    
    sort(edges.begin(), edges.end(), [](Edge& a, Edge& b) {
        return a.cost < b.cost;
    });
    
    parent.resize(N + 1);
    for (int i = 1; i <= N; i++) {
        parent[i] = i;
    }
    
    int ans = 0;
    for (int i = 0; i < M; i++) {
        if (!isSame(edges[i].u, edges[i].v)) {
            unite(edges[i].u, edges[i].v);
            ans += edges[i].cost;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}