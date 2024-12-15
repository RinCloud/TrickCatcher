#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m, ans, u[20];
int c[20], p[20];

void dfs(int x, int solved, int total_score) {
    if (x > n) {
        if (total_score >= m) {
            ans = min(ans, solved);
        }
        return;
    }
    // Solve the problem by not selecting it
    dfs(x + 1, solved, total_score);
    // Solve the problem by selecting it
    for (int i = 1; i <= c[x]; i++) {
        if (total_score >= m) {
            break;
        }
        total_score += x * 100;
        solved++;
    }
    dfs(x + 1, solved, total_score);
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