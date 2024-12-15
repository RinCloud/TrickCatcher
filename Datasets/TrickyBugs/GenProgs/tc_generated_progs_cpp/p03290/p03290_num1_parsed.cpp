#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m, ans, u[20];
int c[20], p[20];

void dfs(int x, ll s, int a, int solved) {
    if (x > n) {
        if (s >= m) {
            ans = min(ans, a);
        } else {
            for (int i = n; i >= 1; i--) {
                if (!u[i] && s < m) {
                    int problems_needed = min(p[i], (m - s + i * 100 - 1) / (i * 100));
                    s += i * 100 * problems_needed;
                    a += problems_needed;
                }
            }
            if (s >= m) {
                ans = min(ans, a);
            }
        }
        return;
    }

    u[x] = 1;
    dfs(x + 1, s + p[x] + c[x] * x * 100, a + c[x], solved + p[x]);
    u[x] = 0;
    dfs(x + 1, s, a, solved);
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%d %d", &p[i], &c[i]);
    }

    ans = INT_MAX;
    dfs(1, 0, 0, 0);
    printf("%d\n", ans);

    return 0;
}
