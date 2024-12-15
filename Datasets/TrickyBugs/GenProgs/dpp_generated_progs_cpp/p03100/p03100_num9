#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

const int N_MAX = 50005;

vector<pair<int, int> > G[N_MAX];
bool visit[N_MAX];

bool dfs(int n, int dest, int r, int MOD, int depth) {
    if (n == dest && r == 0) {
        return true;
    }
    if (depth == 0 || r <= 0) {
        return false;
    }
    if (visit[n]) {
        return false;
    }
    visit[n] = true;
    for (int i = 0; i < G[n].size(); i++) {
        if (dfs(G[n][i].first, dest, r - G[n][i].second, MOD, depth - 1)) {
            return true;
        }
    }
    visit[n] = false;
    return false;
}

int main() {
    int N, M, Q, MOD;
    cin >> N >> M >> Q >> MOD;
    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        G[a].push_back({b, c});
        G[b].push_back({a, c});
    }
    while (Q--) {
        int s, t, r;
        cin >> s >> t >> r;
        r %= MOD;
        fill(visit, visit+N+1, false);
        if (dfs(s, t, r, MOD, 30)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}