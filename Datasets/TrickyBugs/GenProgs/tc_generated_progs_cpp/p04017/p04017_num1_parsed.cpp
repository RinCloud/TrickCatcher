#include <bits/stdc++.h>
using namespace std;
int n, l, q;
int x[100020];
int f[100020][17];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    scanf("%d%d", &l, &q);
    for (int i = 0; i < n; i++) {
        f[i][0] = upper_bound(x, x + n, x[i] + l) - x - 1;
    }
    f[n][0] = n;
    for (int j = 1; j < 17; j++) {
        for (int i = 0; i < n; i++) {
            f[i][j] = f[f[i][j - 1]][j - 1];
        }
    }
    for (int i = 0; i < q; i++) {
        int a, b, days = 0;
        scanf("%d%d", &a, &b);
        a--;
        b--;
        if (a > b) {
            swap(a, b);
        }
        for (int i = 16; i >= 0; i--) {
            if (f[a][i] < b) {
                days += 1 << i;
                a = f[a][i];
            }
        }
        printf("%d\n", days + 1);
    }
    return 0;
}
