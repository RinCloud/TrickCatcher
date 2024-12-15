#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> parent;
vector<int> rank_;

void makeSet(int n) {
    parent.resize(n + 1);
    rank_.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        rank_[i] = 0;
    }
}

int findSet(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = findSet(parent[v]);
}

void unionSets(int a, int b) {
    a = findSet(a);
    b = findSet(b);
    if (a != b) {
        if (rank_[a] < rank_[b])
            swap(a, b);
        parent[b] = a;
        if (rank_[a] == rank_[b])
            rank_[a]++;
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    makeSet(N);

    int ans = 0;
    for (int i = 0; i < M; i++) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        if (findSet(X) != findSet(Y)) {
            unionSets(X, Y);
            ans++;
        }
    }

    cout << N - ans << endl;

    return 0;
}