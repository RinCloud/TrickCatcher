#include<iostream>
#define N 32768
long a[N], b[N], c[N] = {}, n, k, i = N;

int main() {
    std::cin >> n >> k;
    for (--i; a[i] = b[i] = i < n ? i : n, --i;)
        ;

    while (--k) {
        for (++i; i < N; ++i)
            c[i] = c[i - 1] + b[i];

        for (b[--i] = c[n / i]; --i; a[i] = c[i])
            b[i] = (b[i + 1] + a[i] * (n / i - n / (i + 1))) % 1000000007;
    }

    std::cout << b[1];
}
