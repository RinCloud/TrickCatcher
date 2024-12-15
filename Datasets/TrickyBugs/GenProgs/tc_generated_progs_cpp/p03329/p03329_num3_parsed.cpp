#include <cstdio>

int m = 99, n;
int w[12] = {1, 6, 9, 36, 81, 216, 729, 1296, 6561, 7776, 46656, 59049};

void dfs(int p, int s, int c)
{
    if (s != n) {
        if (p >= 0) {
            for (int i = 0; i <= n / w[p] && s + w[p] * i <= n; ++i) {
                dfs(p - 1, s + w[p] * i, c + i);
            }
        }
    } else {
        m = (m < c) ? m : c;
    }
}

int main()
{
    scanf("%d", &n);
    dfs(11, 0, 0);
    printf("%d", m);
}
