#include <bits/stdc++.h>
using namespace std;

long long X(int n, int k, long long p, int &fl) {
    long long s = 1, x = p * (k - 1);
    for (int i = 0; i <= n; ++i) {
        s *= k;
        if (s - 1 > x) {
            if (!fl) {
                return p + 1;
            } else {
                return -1;
            }
        }
    }
    return (s - 1) / (k - 1);
}

int main() {
    int k, n;
    scanf("%d %d", &k, &n);

    if (k == 1) {
        for (int i = 1; i <= (n + 1) / 2; ++i) {
            printf("1 ");
        }
        puts("");
        return 0;
    }

    bool odd = (k & 1);
    int p = 0, fl = 0;
    long long w;

    for (int i = 1; i <= n; ++i) {
        w = X(n - i, k, p, fl);

        if (!fl && p < w) {
            printf("%d ", k + 1 >> 1);
            ++p;
        } else {
            fl = 1;

            if (p >= 0) {
                int j = w * k + p + 1 >> 1;

                if (j <= p) {
                    puts("");
                    return 0;
                }

                j = (j - p - 1) / w + 1;
                printf("%d ", j);
                p += (j + j - k - 1) * w + 1;
            } else {
                int j = w * k - p + 1 >> 1;

                if (j > w * k) {
                    puts("");
                    return 0;
                }

                j = (j - 1) / w + 1;
                printf("%d ", j);
                p += (j + j - k - 1) * w + 1;
            }
        }
    }

    if (!odd) {
        printf("%d ", k / 2);
    }

    puts("");
    return 0;
}
