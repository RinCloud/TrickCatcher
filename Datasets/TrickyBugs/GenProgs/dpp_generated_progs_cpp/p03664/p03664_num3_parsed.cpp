#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

struct Edge {
    int u, v, w;
};

int find(vector<int>& parent, int x) {
    if (parent[x] == x)
        return x;
    return parent[x] = find(parent, parent[x]);
}

bool union_sets(vector<int>& parent, vector<int>& rank, int x, int y) {
    int p1 = find(parent, x);
    int p2 = find(parent, y);

    if (p1 != p2) {
        if (rank[p1] > rank[p2])
            swap(p1, p2);
        parent[p1] = p2;
        if (rank[p1] == rank[p2])
            rank[p2]++;
        return true;
    }
    return false;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<Edge> edges;
    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        edges.push_back({a, b, c});
    }

    sort(edges.begin(), edges.end(), [](const Edge& e1, const Edge& e2) {
        return e1.w < e2.w;
    });

    vector<int> parent(N+1);
    vector<int> rank(N+1, 0);
    for (int i = 1; i <= N; i++)
        parent[i] = i;

    int min_budget = 0;
    int count = 0;
    for (int i = 0; i < M; i++) {
        if (union_sets(parent, rank, edges[i].u, edges[i].v)) {
            min_budget += edges[i].w;
            count++;
            if (count == N-1)
                break;
        }
    }

    cout << min_budget << endl;

    return 0;
}