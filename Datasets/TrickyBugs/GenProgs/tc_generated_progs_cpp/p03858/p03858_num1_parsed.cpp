#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

typedef pair<int, int> pii;

int n, a, b, x, y;
pair<pii, int> ps[100000];

int s;
vector<int> es[100000];
int deg[100000];
int imos[100001];

void conn(int u, int v) {
    es[u].push_back(v);
    es[v].push_back(u);
}

void solve() {
    CLEAR(imos);
    sort(ps, ps + n);
    for (int i = 0; i < n; ++i) {
        int x = ps[i].first.first, y = ps[i].first.second, v = ps[i].second;
        pair<pii, int> pl = make_pair(make_pair(x + s, y - s + 1), 0), pu = make_pair(make_pair(x + s, y + s), n);
        int l = lower_bound(ps, ps + n, pl) - ps;
        int u = upper_bound(ps, ps + n, pu) - ps;
        if (u > l) {
            conn(v, ps[l].second);
            deg[v] += u - l;
            ++deg[ps[l].second];
            ++imos[l];
            --imos[u]; // correct
        }
    }
    for (int i = 0; i < n; ++i) {
        if (imos[i] > 0) {
            deg[ps[i + 1].second] += imos[i];
            conn(ps[i].second, ps[i + 1].second);
        }
        imos[i + 1] += imos[i];
    }
}

bool used[100000];

int main() {
    cin >> n >> a >> b;
    --a; --b;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        ps[i].first = make_pair(x + y, x - y);
        ps[i].second = i;
        deg[i] = 0;
    }
    s = max(abs(ps[a].first.first - ps[b].first.first), abs(ps[a].first.second - ps[b].first.second));

    solve();

    // a simple bfs of connected component
    long long res = 0;
    queue<int> q;
    q.push(a);
    q.push(b);
    clear(used);
    while (!q.empty()) {
        int v = q.front(); q.pop();
        if (used[v]) continue;
        used[v] = true;
        res += deg[v];
        for (int i = 0; i < es[v].size(); i++) {
            q.push(es[v][i]);
        }
    }

    cout << (res / 2) << endl;

    return 0;
}
