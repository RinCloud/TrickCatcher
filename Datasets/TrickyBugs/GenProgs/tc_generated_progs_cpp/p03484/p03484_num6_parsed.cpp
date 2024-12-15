#include <bits/stdc++.h>

using namespace std;

const int N = 100100;

vector<int> g[N], CC, c;
int n, sz[N], mx[N];

void dfs(int v, int pr = 0) {
    sz[v] = 1;
    mx[v] = 0;
    CC.push_back(v);
    for(int u : g[v]) {
        if(u != pr) {
            dfs(u, v);
            sz[v] += sz[u];
            mx[v] = max(mx[v], sz[u]);
        }
    }
}

int findCenter(int v, int pr = 0) {
    for(int u : g[v]) {
        if(u != pr && sz[u]*2 > n) {
            return findCenter(u, v);
        }
    }
    return v;
}

void solve(int v, int d) {
    CC.clear();
    dfs(v);
    int center = findCenter(v);
    c.push_back(d);
    for(int u : CC) {
        c.push_back(d+1);
    }
    for(int u : g[center]) {
        g[u].erase(find(g[u].begin(), g[u].end(), center));
        solve(u, d+1);
    }
}

int main() {
    scanf("%d", &n);
    for(int i=1; i<n; i++) {
        int u, v;
        scanf("%d%d", &u, &v);
        g[u].push_back(v);
        g[v].push_back(u);
    }
    solve(1, 0);
    sort(c.begin(), c.end());
    int answer = 0;
    int low = 0, high = n;
    while(low <= high) {
        int mid = (low + high) >> 1;
        if(upper_bound(c.begin(), c.end(), mid) == c.begin() + n) {
            answer = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    printf("%d %d\n", (int)c.size(), answer);

    return 0;
}
