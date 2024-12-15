#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n,m,ans,u[20];
int c[20],p[20];

void dfs(int x, ll s, int a) {
    if (x > n + 1) {
        if (s >= m) {
            ans = min(ans, a);
        }
        return;
    }
    
    dfs(x + 1, s + p[x] + c[x] * x * 100, a + c[x]);
    dfs(x + 1, s, a);
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%d %d", &p[i], &c[i]);
    }
    ans = 1e9;
    dfs(1, 0, 0);
    printf("%d\n", ans);
    return 0;
}
