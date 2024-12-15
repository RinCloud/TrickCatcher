#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> p(N), pos(N + 1);
    for (int i = 0; i < N; i++) {
        cin >> p[i];
        pos[p[i]] = i;
    }

    vector<int> parent(N + 1), rank(N + 1, 1);
    for (int i = 1; i <= N; i++) {
        parent[i] = i;
    }

    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;

        int px = parent[x], py = parent[y];
        while (px != parent[px]) {
            px = parent[px];
        }
        while (py != parent[py]) {
            py = parent[py];
        }

        if (px == py) {
            continue;
        }

        if (rank[px] < rank[py]) {
            swap(px, py);
        }

        parent[py] = px;
        if (rank[px] == rank[py]) {
            rank[px]++;
        }
    }

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        if (pos[i] == i) {
            ans++;
        } else if (pos[i] == parent[i]) {
            ans += 2;
        }
    }

    cout << ans << endl;

    return 0;
}