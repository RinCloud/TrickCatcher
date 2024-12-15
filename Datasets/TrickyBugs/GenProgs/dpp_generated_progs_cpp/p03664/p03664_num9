#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int, pair<int, int>> Edge;

int find(int x, vector<int>& parent) {
    if (x != parent[x]) {
        parent[x] = find(parent[x], parent);
    }
    return parent[x];
}

bool merge(int x, int y, vector<int>& parent, vector<int>& rank) {
    int px = find(x, parent);
    int py = find(y, parent);
    if (px == py) {
        return false;
    }
    if (rank[px] < rank[py]) {
        parent[px] = py;
    } else if (rank[px] > rank[py]) {
        parent[py] = px;
    } else {
        parent[px] = py;
        rank[py]++;
    }
    return true;
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<Edge> edges;
    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        edges.push_back({c, {a, b}});
    }
    sort(edges.begin(), edges.end());
    vector<int> parent(N + 1);
    for (int i = 1; i <= N; i++) {
        parent[i] = i;
    }
    vector<int> rank(N + 1, 0);
    int minCost = 0;
    int numEdges = 0;
    for (int i = 0; i < M; i++) {
        int a = edges[i].second.first;
        int b = edges[i].second.second;
        if (merge(a, b, parent, rank)) {
            minCost += edges[i].first;
            numEdges++;
        }
        if (numEdges == N - 1) {
            break;
        }
    }
    cout << minCost << endl;
    return 0;
}