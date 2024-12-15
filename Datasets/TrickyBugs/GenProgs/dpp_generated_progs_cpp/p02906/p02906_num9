#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> parent, sz;

int find(int x) {
    if (parent[x] != x) {
        parent[x] = find(parent[x]);
    }
    return parent[x];
}

void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y) return;
    if (sz[x] < sz[y]) {
        swap(x, y);
    }
    sz[x] += sz[y];
    parent[y] = x;
}

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;

    vector<int> a(Q), b(Q), c(Q);
    for (int i = 0; i < Q; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    parent.resize(N);
    sz.resize(N);

    for (int i = 0; i < N; i++) {
        parent[i] = i;
        sz[i] = 1;
    }

    for (int i = 0; i < Q; i++) {
        if (c[i] == 0) {
            unite(a[i], b[i]);
        }
    }

    vector<int> group(N);
    for (int i = 0; i < N; i++) {
        group[i] = find(i);
    }

    for (int i = 0; i < Q; i++) {
        if (c[i] == 1) {
            if (group[a[i]] == group[b[i]]) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        parent[i] = i;
        sz[i] = 1;
    }

    for (int i = 0; i < Q; i++) {
        if (c[i] == 1) {
            unite(a[i], b[i]);
        }
    }

    group.clear();
    group.resize(N);

    for (int i = 0; i < N; i++) {
        group[i] = find(i);
    }

    for (int i = 0; i < Q; i++) {
        if (c[i] == 0) {
            if (group[a[i]] == group[b[i]]) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;

    return 0;
}