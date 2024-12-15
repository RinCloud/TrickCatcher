#include <cstdio>
#include <cmath>

int m=99, n, w[12]={1,6,9,36,81,216,729,1296,6561,7776,46656,59049};

void dfs(int p, int s, int c)
{
    if (s != n) {
        if (p > 0) {
            for (int i = 0; i < 6 && s + w[p-1] * i <= n; ++i) {
                dfs(p-1, s+w[p-1]*i, c+i);
            }
        }
    } else {
        m = (m < c) ? m : c;
    }
}

int main()
{
    scanf("%d", &n);
    dfs(12, 0, 0);
    printf("%d", m);
}
