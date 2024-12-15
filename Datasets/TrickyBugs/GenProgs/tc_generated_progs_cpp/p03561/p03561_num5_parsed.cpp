#include <bits/stdc++.h>
using namespace std;

long long X(int k, int n, long long p) {
    long long s = 1, x = p * (k - 1);
    for (int i = 0; i <= n; ++i){
        s *= k; 
        if (s - 1 > x) 
            return p + 1;
    }
    return (s - 1) / (k - 1);
}

bool is_odd(int k) {
    return k % 2 != 0;
}

int get_j(int k, int n, long long p, long long w) {
    if (p >= 0) {
        int j = w * k + p + 1 >> 1;
        if (j <= p) {
            return -1;
        }
        j = (j - p - 1) / w + 1;
        return j;
    } else {
        int j = w * k - p + 1 >> 1;
        if (j > w * k) {
            return -1;
        }
        j = (j - 1) / w + 1;
        return j;
    }
}

int main() {
    int k, n;
    scanf("%d%d", &k, &n);

    long long p = 0;
    long long w = X(k, n - 1, p);

    if (k == 1) {
        for (int i = 1; i <= (n + 1) / 2; ++i) 
            printf("1 ");
        puts("");
        return 0;
    }

    if (is_odd(k)) {
        for (int i = 1; i <= n; ++i) {
            if (p < w) {
                printf("%d ", k + 1 >> 1);
                ++p;
            } else {
                int j = get_j(k, n - i, p, w);
                if (j == -1) {
                    puts("");
                    return 0;
                }
                printf("%d ", j);
                p += (j + j - k - 1) * w + 1;
            }
        }
    } else {
        printf("%d ", k / 2);
        for (int i = 1; i < n; ++i) {
            printf("%d ", k);
        }
    }

    puts("");
    return 0;
}
