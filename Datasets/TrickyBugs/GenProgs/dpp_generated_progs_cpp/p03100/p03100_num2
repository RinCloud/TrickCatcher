#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MAXN = 50005;
const int MAXM = 100005;
int N, M, Q, MOD;

struct edge {
    int to;
    int len;
    int nxt;
};
edge e[MAXM];
int head[MAXN], tot;

void addEdge(int u, int v, int w) {
    e[++tot].to = v;
    e[tot].len = w;
    e[tot].nxt = head[u];
    head[u] = tot;
}

int vis[MAXN], cnt = 0;
bool flag = false;

void dfs(int u, int t, int r) {
    if (u == t) {
        if ((r & 1) == 0) flag = true;
        return;
    }
    if (flag) return;
    vis[u] = ++cnt;
    for (int i = head[u]; i; i = e[i].nxt) {
        if (vis[e[i].to] == cnt) continue;
        int tmp = r;
        if (cnt) {
            tmp -= e[i].len;
            if (tmp < 0) tmp += MOD;
            tmp <<= 1;
            if (tmp >= MOD) tmp -= MOD;
            tmp += e[i].len;
            if (tmp >= MOD) tmp -= MOD;
        }
        dfs(e[i].to, t, tmp);
    }
}

int main() {
    cin >> N >> M >> Q >> MOD;
    for (int i = 0; i < M; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        addEdge(u, v, w);
        addEdge(v, u, w);
    }
    for (int i = 0; i < Q; ++i) {
        memset(vis, 0, sizeof(vis));
        cnt = 0;
        int s, t, r;
        cin >> s >> t >> r;
        flag = false;
        dfs(s, t, r);
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}