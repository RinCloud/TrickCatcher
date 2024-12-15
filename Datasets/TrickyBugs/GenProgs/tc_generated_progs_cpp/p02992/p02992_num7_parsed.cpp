#include<iostream>
#define M 1000000007
#define N 32768

int main() {
    long long a[N], b[N], c[N] = {0}, n, k;
    std::cin >> n >> k;
    for (int i = 1; i < N; i++) {
        a[i] = i < n ? i : n;
        b[i] = n / i;
    }
    while (--k) {
        for (int i = 1; i < N; i++) {
            c[i] = (c[i-1] + b[i])%M;
        }
        for (int i = N-1; i >= 1; i--) {
            b[i] = (c[n / i]-c[i-1]+M)%M;
            a[i] = c[i];
        }
    }
    std::cout << b[1];
}
