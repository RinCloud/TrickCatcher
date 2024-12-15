#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
const int maxn = 100010;
int n, m, a[maxn];

int main() {
    int X;
    scanf("%d%d", &X, &n);
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    int L = 0, R = X;
    int t = 0, k = 0, s = -1, x = 0;
    int time, A;
    scanf("%d", &m);
    for(int i = 1; i <= m; i++) {
        scanf("%d%d", &time, &A);
        while(k < n && a[k+1] <= time) {
            int dif = s * (a[k+1] - t);
            L = max(0, min(X, L + dif));
            R = max(0, min(X, R + dif));
            s *= -1;
            x += dif;
            t = a[k+1];
            k++;
        }
        int T = time - t;
        A = max(0, min(X, A + x));
        A = max(0, min(X, A + s * T));
        printf("%d\n", A);
    }
    return 0;
}