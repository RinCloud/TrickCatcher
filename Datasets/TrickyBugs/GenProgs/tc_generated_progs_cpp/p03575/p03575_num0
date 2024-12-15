#include <iostream>
#include <cstdio>
using namespace std;

int n, m, ans, s[55];
bool a[55][55];
bool visited[55][55];

void dfs(int u, int v) {
    visited[u][v] = visited[v][u] = true;
    for (int i = 1; i <= n; i++) {
        if (a[v][i] && !visited[v][i]) {
            dfs(v, i);
        }
    }
}

int main()
{
    int i ,j, t1, t2;
    cin >> n >> m;
    while (m--) {
        scanf ("%d %d", &t1, &t2);
        a[t1][t2] = a[t2][t1] = 1;
        s[t1]++;
        s[t2]++;
    }
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            visited[i][j] = false;
        }
    }
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (a[i][j] && !visited[i][j]) {
                dfs(i, j);
                ans++;
            }
        }
    }
    
    cout << ans;
    return 0;
}